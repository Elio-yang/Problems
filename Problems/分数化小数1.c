/*
输入正整数a,b,c，输出a/b的小数形式，精确到小数点后的c位。结束标记为
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
		}//结束flag
		m = 1.0*a / b;
		s++;
		printf("Case %d: %.*f", s, c, m);//printf的特殊用法
		//printf(“% * . * lf\n”, 8, 4, (double)1/6); 会输出8个字宽保留4位小数的浮点数运算结果
	}
	return 0;
}
