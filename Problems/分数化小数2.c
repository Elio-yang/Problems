/*
输入正整数a,b,c，输出a/b的小数形式，精确到小数点后的c位。
a,b，=10^6,c<=100.结束标记为a=b=c=0.
注：不能使用printf函数的特殊用法。
*/
#include <stdio.h>

int main()
{
	int n, m[110];//n整数部分，m小数部分 
	//小数部分精度过高，只能用数组输出
	int a, b, c, i, k = 0;
	while (scanf("%d%d%d", &a, &b, &c) !=EOF)
	{
		k++;
		n = a / b;
		a = a % b;
		m[0] = 0;//十分位小数，可以进位为整数 
		for (i = 1; i <= c; i++)
		{
			m[i] = a * 10 / b;
			a = a * 10 % b;
		}
		if (a * 10 / b >= 5)//第C+1位，四舍五入
		{
			for (i = c; i >= 0; i--)//进位处理 
			{
				m[i] = m[i] + 1;
				if (m[i] < 10)
					break;//若不存在进位，跳出循环。 
				else
					m[i] -= 10;
			}
		}
		n = n + m[0];//整数部分进位处理。 
		printf("Case %d: %d.", k, n);//打印整数部分及小数点
		for (i = 1; i <= c; i++)
			printf("%d", m[i]);//打印小数部分。 
		printf("\n");
	}
	return 0;
}
