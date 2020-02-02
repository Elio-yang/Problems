/*
如果x加上x的各位数字之和等于y，就称x是y的生成元。
例如198是216的生成元。
*/
#include<stdio.h>
#include<string.h>
#define MAX 100010
int main()
{
	int n, i, x, y;
	int ans[MAX];
	memset(ans, 0, sizeof(ans));
	for (i = 1; i <= MAX; i++)
	{
		x = i;//此时的i是当作生成元去处理  还原成本来的那个数
		y = i;		
		while (y > 0)
		{
			x += y % 10;
			y /= 10;//x是通过生成元定义还原后的那个数
		}
		if (ans[x] == 0||i<ans[x])
		{
			ans[x] = i;//x代表输入的数也就是通过生成元还原的那个数，i代表生成元
		}
	}
	while (scanf("%d", &n) == 1)
	{
		printf("%d\n", ans[n]);
	}
	
	return 0;
}