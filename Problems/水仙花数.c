/*
���100~999֮�������ˮ�ɻ���(daffodil),���һ����λ��
ABC,��ABC=A^3+B^3+C^3,�����Ϊˮ�ɻ�����
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