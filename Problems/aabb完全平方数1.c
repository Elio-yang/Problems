/*
输出所有形如aabb的完全平方数
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
	int m, n;
	
	for (a = 1; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			n = 1100 * a + 11 * b;
			m = floor(sqrt(n) + 0.5);
			if (m*m == n)
			{
				printf("%d\n", n);
			}
		}
	}
	return 0;
}