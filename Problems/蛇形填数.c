/*
��n*n�ķ�����������1��2��3��...,n*n�����統n=4ʱ��
10 11 12 1
9  16 13 2
8  15 14 3  
7  6  5  4
*/
#include<stdio.h>
#include<string.h>
#define SIZE 20
int main()
{
	int a[SIZE][SIZE];
	memset(a, 0, sizeof(a));//ȫ��ʼ��Ϊ0����a[x+1][y]Ϊ���ʾ������δ��
	int i, j;
	int n;
	int sum;
	scanf("%d", &n);
	int x, y;//x���У�y����
	sum = a[x = 0][y = n - 1] = 1;
	while (sum < n*n)
	{
		while (x + 1 < n && !a[x + 1][y])//���һ������
		{
			a[++x][y] = ++sum;
		}
		while (y - 1 >= 0 && !a[x][y - 1])//���һ������
		{
			a[x][--y] = ++sum;
		}
		while (x - 1 >= 0 && !a[x - 1][y])//����������
		{
			a[--x][y] = ++sum;
		}
		while (y + 1 < n && !a[x][y + 1])
		{
			a[x][++y] = ++sum;

		}
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			printf("%3d", a[x][y]);
		}
		printf("\n");
	}

	return 0;
}