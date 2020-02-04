/*
有一只小鱼，它平日每天游泳 250 公里，周末休息（实行双休日)，
假设从周 x(1≤x≤7) 开始算起，过了 n天以后，小鱼一共累计游泳
了多少公里呢？

输入格式
输入两个整数x,n(表示从周x算起，经过n天）。

输出格式
输出一个整数，表示小鱼累计游泳了多少公里。
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