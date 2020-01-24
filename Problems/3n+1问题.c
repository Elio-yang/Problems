/*
对于任意大于1的自然数n，若n为奇数，则将n变成3n+1；若n为偶数，
则将其减半。经过若干次这样的变换，一定会将n变成1.
输入n的值，n<10^9
输出变换的次数
*/
#include<stdio.h>
int main()
{
	int count=0;
	long long n;//防止溢出
	scanf("%lld", &n);
	while (n > 1)
	{
		if (n % 2 == 1)
			n = 3 * n + 1;
		else
			n /= 2;
		count++;
	}
	printf("%d", count);
	return 0;
}