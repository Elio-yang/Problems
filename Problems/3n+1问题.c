/*
�����������1����Ȼ��n����nΪ��������n���3n+1����nΪż����
������롣�������ɴ������ı任��һ���Ὣn���1.
����n��ֵ��n<10^9
����任�Ĵ���
*/
#include<stdio.h>
int main()
{
	int count=0;
	long long n;//��ֹ���
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