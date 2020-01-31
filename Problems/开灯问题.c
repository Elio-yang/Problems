/*
有n盏灯，编号1~n，第一个人把所有灯打开，第二个人按下所有编号位2
的倍数的灯的开关，以此类推，(如果原来是关着的，那就打开）一共有
k个人，最后有哪些灯开着？
输入n和k。
input：7 3
output：1 5 6 7
*/
#include<stdio.h>
#include<string.h>
#define size 1000
int main()
{
	int a[size];
	int n, k;
	int i, j;
	int first = 1;
	memset(a, 0, sizeof(a));//所有的灯状态都初始化为0，也就是都开着
	//int a[size] = { 0 };
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n ; i++)
	{
		for (j = 2; j <= k; j++)
		{
			if (i%j == 0)
			{
				a[i] = !a[i];//关掉的灯状态记为1
			}
			
		}
		
	}
	for (i = 1; i <= n; i++)
	{
		if (a[i]==0)//如果a[i]==0,就是还开着的灯
		{
			if (first)
			{
				first = 0;
			}
			else
			{
				printf(" ");
			}
			printf("%d", i);
		}
	}
	printf("\n");


	return 0;
}