/*
������������n<m<10^6,���1/n^2+1/(n+1)^2+...+1/m^2,����5λС��
��������������ݣ��������Ϊn=m=0��
*/
#include<stdio.h>
int main()
{
	long long  n, m;
	double s=0;
	int i;
	while (scanf("%d %d", &n, &m) == 2)
	{
		if (n == m && m == 0)
		{
			break;
		}
		for (i = n; i <= m; i++)
		{
			s += 1.0 /(i * i);
		}
		printf("%.5f\n", s);
		continue;
	}
	return 0;
}