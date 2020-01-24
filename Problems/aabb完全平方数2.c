/*
输出所有形如aabb的完全平方数
*/
#include<stdio.h>
#include<math.h>//数学库
int main()
{
	int N,m;
	int q,p,x,y;
	
	for (N = 1000; N <= 9999; N++)
	{	q = N % 10;
		p = N / 10;
		x = N / 100;
		y = N / 1000;
		m = floor((sqrt(N) + 0.5));
		//floor(x)参数为x，返回值为不小于x的整数
		if ((q == (p % 10) && (x % 10) == y && (m*m == N)))
		{
			printf("%d",N);
		}
	}

	return 0;
}