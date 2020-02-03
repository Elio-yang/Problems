/*
用1，2，3，...，9组成三个3位数，abc,def,ghi,每个数字恰好使用1次，
要求abc:def:ghi=1:2:3。按照“abc def ghi"的格式输出所有解，每行
一个解。
*/
#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, i;
	int A, B, C;
	int j;
	for (j = 111; j <= 333; j++)
	{
		A = j;
		B = 2 * j;
		C = 3 * j;

		a = j / 100;//百位数字
		b = (j - 100 * a) / 10;//十位数字
		c = j % 10;//个位数字

		d = B / 100;//百位数字
		e = (B - 100 * d) / 10;//十位数字
		f = B % 10;//个位数字

		g = C / 100;//百位数字
		h = (C - 100 * g) / 10;//十位数字
		i = C % 10;//个位数字

		if (a + b + c + d + e + f + g + h + i == 45 && a*b*c*d*e*f*g*h*i == 362880)
		{
			printf("%d %d %d\n", A, B, C);
		}
	}


	return 0;
}