/*
������������ڣ������һ�������ڼ�
*/
/*
Zeller��ʽ
*/
#include<stdio.h>
int main()
{
	int year;//���
	int y;//��ݺ���λ
	int c;//����
	int w;//����
	int m;//�·�
	int d;//�ڼ���

	
		y = year % 100;
		if (m == 1 || m == 2)
		{
			y--;
			m += 12;
		}
		c = year / 100;
		w = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d - 1;
		printf("That day is ");
		switch (w % 7)
		{
		case 1:printf("Monday.\n");
			break;
		case 2:printf("Tuseday.\n");
			break;
		case 3:printf("Wednesday.\n");
			break;
		case 4:printf("Thursday.\n");
			break;
		case 5:printf("Friday.\n");
			break;
		case 6:printf("Saturday.\n");
			break;
		case 7:printf("Sunday.\n");
			break;
		default:
			printf("Oops!Erorr!");
		}

	return 0;

}