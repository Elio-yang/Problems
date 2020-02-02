/*
����Ϊn�Ļ�״����n�ֱ�ʾ�����ֱ�Ϊĳ��λ�ÿ�ʼ˳ʱ��õ���
CGAGTCAGCT, GAGTCAGCTC, AGTCAGCTCG�ȡ�����Щ��ʾ���У���
������С�ĳ�Ϊ����С��ʾ��������һ������Ϊn(n <= 100)�Ļ�״
DNA����ֻ����A��C��G��T��4���ַ�����һ�ֱ�ʾ�������������
����û�״������С��ʾ�������ֵ���
���磬CTCC����С��ʾ��CCCT, CGAGTCAGCT����С��ʾΪAGCTCGAGTC��
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
		for (i = 1; i < len;i++)//�ӵڶ���Ԫ�ؿ�ʼ�Ƚ�
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
		if (ans[(current+i)%len]!=ans[(small+i)%len])//��current��2th---n)��ʼ�Ƚ�small(�����0����һ����ʼ��
			//%len����;�ǽ���һ��ѭ�������current+i>len
		{
			return ans[(current + i) % len] < ans[(small + i) % len];
		}
	}
	return 0;
}