/*
��1��2��3��...��9�������3λ����abc,def,ghi,ÿ������ǡ��ʹ��1�Σ�
Ҫ��abc:def:ghi=1:2:3�����ա�abc def ghi"�ĸ�ʽ������н⣬ÿ��
һ���⡣
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
			B = 2*j;
			C = 3*j;

			a = j / 100;//��λ����
			b = (j - 100 * a) / 10;//ʮλ����
			c = j % 10;//��λ����

			d = B / 100;//��λ����
			e = (B - 100 * d) / 10;//ʮλ����
			f = B % 10;//��λ����

			g = C / 100;//��λ����
			h = (C - 100 * g) / 10;//ʮλ����
			i = C % 10;//��λ����



			if (a != b && a != c && a != d && a != e && a != f && a != g && a != h && a != i && a != 0)
			{
				if (b != c && b != d && b != e && b != f && b != g && b != h && b != i && b != 0)
				{
					if (c != d && c != e && c != f && c != g && c != h && c != i && c != 0)
					{
						if (d != e && d != f && d != g && d != h && d != i && d != 0)
						{
							if (e != f && e != g && e != h && e != i && e != 0)
							{
								if (f != g && f != h && f != i && f != 0)
								{
									if (g != h && g != i && g != 0)
									{
										if (h != i && h != 0)
										{
											if (i != 0)
											{
												printf("%d %d %d\n", A, B, C);
											}
										}
											
									}
										
								}
								
							}
								
						}
							
					}
				}
					

			}
				
		}
	
	
	



	return 0;
	
}