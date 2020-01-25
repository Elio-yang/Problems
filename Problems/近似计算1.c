/*
计算pi/4=1-1/3+1/5-1/7...,直到最后一项小于10^-6
*/
#include<stdio.h>
#include<math.h>
int main()
{
	double sum = 0;
	int i;
	double term;
	double exact = 3.1415926;
	
		for (i = 0;; i++)
		{
			term = 1.0 / (2 * i + 1);
			if (i % 2 == 0)
			{
				sum += term;
			}
			else
			{
				sum -= term;
			}
			if (term < 1e-12)
				break;
		}

	printf("%.12f", sum);
	printf("%.12f", sum - exact / 4);
	return 0;


}