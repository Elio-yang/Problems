/*
在n*n的方阵里面填入1，2，3，...,n*n，例如当n=4时：
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
	memset(a, 0, sizeof(a));//全初始化为0即！a[x+1][y]为真表示该区域未填
	int i, j;
	int n;
	int sum;
	scanf("%d", &n);
	int x, y;//x是行，y是列
	sum = a[x = 0][y = n - 1] = 1;
	while (sum < n*n)
	{
		while (x + 1 < n && !a[x + 1][y])//最后一列往下
		{
			a[++x][y] = ++sum;
		}
		while (y - 1 >= 0 && !a[x][y - 1])//最后一行往左
		{
			a[x][--y] = ++sum;
		}
		while (x - 1 >= 0 && !a[x - 1][y])//从下往上走
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