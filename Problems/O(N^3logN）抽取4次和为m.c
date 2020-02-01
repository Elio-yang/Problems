#include<stdio.h>
#include<stdbool.h>
#define NotFound -1
int main()
{
	int i, j, k, l, n, m;
	int k1, k2, k3, k4;
	int K[50] = { 0 };
	printf("How many numbers will be in the set?\n");
	scanf("%d", &n);
	printf("\n");

	printf("Which sum you want:\n");
	scanf("%d", &m);
	printf("\n");

	printf("Input the numbers in oder:\nK[%d]=\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &K[i]);
	}

	printf("The set is:\nK[%d]=", n);
	printf("[");
	for (i = 0; i < n; i++)
	{
		printf("%3d", K[i]);
	}
	printf("]");
	printf("\n");
	bool flag = false;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				
					if (BinarySearch(K, m - K[i] - K[j] - K[k],n))
					{
						flag = true;
						printf("%4d%4d%4d%4d\n", K[i], K[j], K[k], K[l]);
					}
				
			}
		}
	}
	if (flag)
	{
		printf("Yes");
	}
	return 0;
}
int BinarySearch(int A[], int X, int N)
{
	int Left, Mid, Right;
	//define left-node,right-node and mid-node
	Left = 0, Right = N - 1;
	//initial consition
	while (Left <= Right)//loop condition:left-node is smaller than right
	{
		Mid = (Left + Right) / 2;//get the mid-node,int makes it a integer
		if (A[Mid] < X)
		{
			Left = Mid + 1;
			//if value-mid<X,X should be the right part of mid,so we make left=mid+1 to have a new set
		}
		else if (A[Mid] > X)
		{
			Right = Mid - 1;
			//if value-mid>X,X should be the left part of mid,so we make right=mid-1 to have a new set
		}
		else
		{
			return Mid;//value-mid=X,that's the solution 
		}

	}
	return NotFound;//NotFound has been defined as -1
}
/*
Algorithm Analysis£ºO(N^3logN)
*/