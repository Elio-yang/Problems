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
	int j, k, l;
	
	for (j = 1; j <= 9; j++)
	{
		for (k = 1; k <= 9; k++)
		{
			for (l = 1; l <= 9; l++)
			{
				a = 100 * j;
				b = 10 * k;
				c = l;

				d = 100 * j;
				e = 10 * k;
				f = l;

				g = 100 * j;
				h= 10 * k;
				i = l;

				A = a + b + c;
				B = d + e + f;
				C = g + h + i;
				if (a != b && a != c && a != d && a != e && a != f && a != g && a != h && a != i &&
					b != c && b != d && b != e && b != f && b != g && b != h && b != i &&
					c != d && c != e && c != f && c != g && c != h && c != i &&
					d != e && d != f && d != g && d != h && d != i &&
					e != f && e != g && e != h && e != i &&
					f != g && f != h && f != i &&
					g != h && g != i &&
					h != i)
				{
					if (A / B == 1 / 2 && B / C == 2 / 3)
					{
						printf("%d %d %d", A, B, C);
					}
				}
			}
		}
	}




	return 0;
	
}