/*
����������a,b,c�����a/b��С����ʽ����ȷ��С������cλ���������Ϊ
a=b=c=0
*/
#include<stdio.h> 
int main()
{
	int a, b, c, s = 0;
	double m;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}//����flag
		m = 1.0*a / b;
		s++;
		printf("Case %d: %.*f", s, c, m);//printf�������÷�
		//printf(��% * . * lf\n��, 8, 4, (double)1/6); �����8���ֿ���4λС���ĸ�����������
	}
	return 0;
}
