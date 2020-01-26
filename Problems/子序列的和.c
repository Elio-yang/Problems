/*
输入俩正整数n<m<10^6,输出1/n^2+1/(n+1)^2+...+1/m^2,保留5位小数
输入包含多组数据，结束标记为n=m=0。
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