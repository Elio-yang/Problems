/*
����һ����ݣ��������������Yes�����Ǿ����No
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