/*
��nյ�ƣ����1~n����һ���˰����еƴ򿪣��ڶ����˰������б��λ2
�ı����ĵƵĿ��أ��Դ����ƣ�(���ԭ���ǹ��ŵģ��Ǿʹ򿪣�һ����
k���ˣ��������Щ�ƿ��ţ�
����n��k��
input��7 3
output��1 5 6 7
*/
#include<stdio.h>
#include<string.h>
#define size 1000
int main()
{
	int a[size];
	int n, k;
	int i, j;
	int first = 1;
	memset(a, 0, sizeof(a));//���еĵ�״̬����ʼ��Ϊ0��Ҳ���Ƕ�����
	//int a[size] = { 0 };
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n ; i++)
	{
		for (j = 2; j <= k; j++)
		{
			if (i%j == 0)
			{
				a[i] = !a[i];//�ص��ĵ�״̬��Ϊ1
			}
			
		}
		
	}
	for (i = 1; i <= n; i++)
	{
		if (a[i]==0)//���a[i]==0,���ǻ����ŵĵ�
		{
			if (first)
			{
				first = 0;
			}
			else
			{
				printf(" ");
			}
			printf("%d", i);
		}
	}
	printf("\n");


	return 0;
}