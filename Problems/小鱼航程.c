/*
��һֻС�㣬��ƽ��ÿ����Ӿ 250 �����ĩ��Ϣ��ʵ��˫����)��
������� x(1��x��7) ��ʼ���𣬹��� n���Ժ�С��һ���ۼ���Ӿ
�˶��ٹ����أ�

�����ʽ
������������x,n(��ʾ����x���𣬾���n�죩��

�����ʽ
���һ����������ʾС���ۼ���Ӿ�˶��ٹ��
*/
#include<stdio.h>
int main()
{
	int x, n;
	int sum = 0;
	int i;
	scanf("%d %d", &x, &n);
	for (i = 1; i <= n; i++)
	{
		if (x > 7)
		{
			x = x % 7;
		}
		if (x != 6 && x != 7)
		{
			sum += 250;
		} 
		x++;
	}
	printf("%d", sum);
	return 0;
}
#include <stdio.h>
int main()
{
	int x, n;
	int sum = 0;
	scanf("%d %d", &x, &n);
	while (n > 0)
	{
		if (x > 7)
		{
			x = x % 7;
		}
		if (x != 6 && x != 7)
		{
			sum += 250;
		}
		x++;
		n--;
	}
	printf("%d", sum);
	return 0;
}