/*
Here is a set of integers k1,k2,...k_N.Take one from the set
once and put it back after operation.Make a program to give 
a solution such that the sum of 4 numbers will be m.If it is 
solveable print Yes,otherwise No.
sample:
input:
n=3
m=10
K[3]=1 3 5
output:
Yes
*/

#include<stdio.h>
#include<stdbool.h>
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

	printf("Input the numbers:\nK[%d]=\n",n);
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
				for (l = 0; l < n; l++)
				{
					if (K[i] + K[j] + K[k] + K[l] == m)
					{
						flag = true;			
						printf("%4d%4d%4d%4d\n", K[i], K[j], K[k], K[l]);
					}
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
