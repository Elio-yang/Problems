/*
�����������aabb����ȫƽ����
*/
#include<stdio.h>
#include<math.h>//��ѧ��
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
		//floor(x)����Ϊx������ֵΪ��С��x������
		if ((q == (p % 10) && (x % 10) == y && (m*m == N)))
		{
			printf("%d",N);
		}
	}

	return 0;
}