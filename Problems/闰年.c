/*
输入一个年份，若是闰年则输出Yes，不是就输出No
*/
#include<stdio.h>
#include<stdbool.h>
int main()
{
	int year;
	bool flag=false;
	while((scanf("%d",&year)==1))
	{
			if((year%4==0&&year%100!=0)||(year%400==0&&year%3200!=0)||year%172800==0)
			{
				flag = true;
			}
			if (flag)
			{
				printf("Yes\n");
			}
			else
			{
			printf("No\n");
			}
			flag = false;
	}
	return 0;
}