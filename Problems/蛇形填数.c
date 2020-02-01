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
	int n;
	int sum;
	scanf("%d", &n);
	int x, y;//x是行，y是列
	sum = a[x = 0][y = n - 1] = 1;//填充第一个格子
	while (sum < n*n)
	{
		while (x + 1 < n && !a[x + 1][y])//最后一列往下 下一个格子是（x+1，y）
		{
			a[++x][y] = ++sum;//如果使用sum++，那么第二个格子会被赋值1，之后再递增，第三个格子赋值2
		}
		while (y - 1 >= 0 && !a[x][y - 1])//最后一行往左 下一个格子是(y-1,x)
		{
			a[x][--y] = ++sum;
		}
		while (x - 1 >= 0 && !a[x - 1][y])//从下往上走 下一个格子是（x-1,y) 
		{
			a[--x][y] = ++sum;
		}
		while (y + 1 < n && !a[x][y + 1])//从左往右走  下一个格子是（x，y+1)
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