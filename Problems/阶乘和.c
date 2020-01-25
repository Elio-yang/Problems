/*
输入n，计算S=1！+2！+3！+...+n！的末6位
*/
#include<stdio.h>
int main()
{
	long long  S;
	S = 0;
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int fac = 1;
		for (j = 1; j <= i; j++)
		{
			fac *= j;
		}
		S += fac;
	}
	printf("%lld\n", S % 1000000);
	printf("%lld\n", S);
	return 0;
}