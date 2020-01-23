/*
输入三个整数，从小到大后排序输出 
*/
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a <= b && b <= c)
		printf("%d %d %d", a, b, c);//abc
	else if (a <= c && c <= b)
		printf("%d %d %d", a, c, b);//acb
	else if (b <= a && a <= c)
		printf("%d %d %d", b, a, c);//bac
	else if (b <= c && c <= a)
		printf("%d %d %d", b, c, a);//bca
	else if (c <= a && a <= b)
		printf("%d %d %d", c, a, b);//cab
	else if (c <= b && b <= a)
		printf("%d %d %d", c, b, a);//cba

	return 0;

}