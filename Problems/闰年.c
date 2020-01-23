/*
输入一个年份，若是闰年则输出Yes，不是就输出No
*/
#include<stdio.h>
#include<stdbool.h>
int main()
{
	int year;
	bool flag=false;
	scanf("%d", &year);
	if (((year % 4 == 0) && (year % 100 != 0)) || ((year % 100 == 0) && (year % 400 == 0)))
	{
		flag = true;
	}
	if (flag)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}

	return 0;

}