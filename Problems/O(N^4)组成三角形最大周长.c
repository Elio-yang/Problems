/*
There are n sticks,the i-th has the length a_i,
find 3 sticks which can consist a triangle and 
make the biggest perimeter.
sample:
input:
n=4
A[]=2 3 4 5 10
output:
12(when 3 4 5)
*/

#include<stdio.h>
int main()
{
	int A[50] = { 0 };
	int i, j, k, n;
	int max, len, res, ans;
	ans = 0;
	printf("How many sticks are here:\n");
	scanf("%d", &n);
	printf("How long are they?\nA[%d]=\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	printf("The set is \nA[%d]=[",n);
	for (i = 0; i < n; i++)
	{
		printf("%4d", A[i]);
	}
	printf("    ]\n");

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			for (k = j + 1; k < n; k++)
			{
				len = A[i] + A[j] + A[k];
				max = Max(A[i], A[j], A[k]);
				res = len - max;
				if (max < res)//conditions to consist a triangle
				{
					ans = (len > ans) ? len : ans;
				}
			}
		}
	}

	printf("%d", ans);

	return 0;
}
int Max(int A, int B, int C)
{
	return (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
}
/*
Algorithm Analysis:O(N^3)
*/