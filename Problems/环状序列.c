/*
长度为n的环状串有n种表示法，分别为某个位置开始顺时针得到。
CGAGTCAGCT, GAGTCAGCTC, AGTCAGCTCG等。在这些表示法中，字
典序最小的称为“最小表示”。输入一个长度为n(n <= 100)的环状
DNA串（只包含A、C、G、T这4种字符）的一种表示法，你的任务是
输出该环状串的最小表示。即：字典序。
例如，CTCC的最小表示是CCCT, CGAGTCAGCT的最小表示为AGCTCGAGTC。
*/
#include<stdio.h>
#include<string.h>
#define MAXN 105

int smaller(char*ans, int current, int smaller);
int main()
{
	int i;
	char ans[MAXN];
	int T;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%s", ans);
		int small = 0;
		int len = strlen(ans);
		for (i = 1; i < len;i++)//从第二个元素开始比较
		{
			if (smaller(ans, i, small));
			small = i;
		}
		for (i = 0; i < len; i++)
		{
			putchar(ans[(small + i) % len]);
		}


	}
	return 0;
}

int smaller(char*ans, int current, int small)
{
	int len = strlen(ans);
	for (int i = 0; i < len; i++)
	{
		if (ans[(current+i)%len]!=ans[(small+i)%len])//从current（2th---n)开始比较small(从序号0，第一个开始）
			//%len的用途是进行一个循环，如果current+i>len
		{
			return ans[(current + i) % len] < ans[(small + i) % len];
		}
	}
	return 0;
}