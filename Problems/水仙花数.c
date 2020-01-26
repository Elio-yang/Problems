/*
输出100~999之间的所有水仙花数(daffodil),如果一个三位数
ABC,有ABC=A^3+B^3+C^3,则该数为水仙花数。
*/

#include<stdio.h>
int cube(int X);
int main()
{
	int n;
	int A, B, C;

	for (n = 100; n <= 999; n++)
	{
		A = n % 10;
		B = (n / 10) % 10;
		C = (n / 100);
		if (cube(A) + cube(B) + cube(C) == n)
			printf("%d is daffodil.\n", n);
	}

	return 0;
}
int cube(int X)
{
	int m;
	m = X*X*X;
	return m;
}