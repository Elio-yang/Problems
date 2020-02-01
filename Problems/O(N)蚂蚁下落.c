/*
在一根长为L的水平木棍上有一群数量为n的蚂蚁，它们以每秒1cm/s的速度走到木棍一端就会掉下去。
现在知道它们的起始位置是距离木根左端点的 x_i 处。但是不知道它们爬行的方向。在相向而行的两只
蚂蚁相遇后，它们会掉头往反方向走。问所有蚂蚁都落下木棍的最快时间和最慢时间。
*/
#include<stdio.h>
#define MAXN 100000

int main()
{
	int n, L;
	int i, j;
	int X[MAXN] = { 0 };
	int max, ansmax,min,ansmin;
	ansmax = 0;
	ansmin = 0;
	scanf("%d %d", &n, &L);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &X[i]);
	}

	for (j = 0; j < n; j++)
	{
		min = Min(X[j], L - X[j]);
		if (min > ansmin)
		{
			ansmin = min;
		}
		
	}
	/*
	能够使得全部蚂蚁下去的最短时间，不能只单纯的找出最短时间，
	还要保证全部蚂蚁下去，所以要找能够让蚂蚁全部下去的最短时间
	里面最大的时间，所以要取最小值里面最大的:
	 mint =max(mint, min(x[i],L-x[i]));
    */
	printf("%4d", ansmin);

    for (i = 0; i < n; i++)
	{
		max = Max(X[i], L - X[i]);
		if (max > ansmax)
		{
			ansmax = max;
		}
	}
	/*最大时间只需要找到蚂蚁距离两端的最大距离就可*/
	printf("%4d", ansmax);

	return 0;
}

int Max(int A, int B)
{
	return (A > B) ? A : B;
}
int Min(int A, int B)
{
	return (A < B) ? A : B;
}
/*
Algorithm Analysis:O(N)
*/
/*
#include<stdio.h>
#include<string.h>
#define maxn 1000050
int dis[maxn];
int min(int x,int y);
int max(int x,int y);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int l,n;
		scanf("%d%d",&l,&n);
		for(int i=0;i<n;i++)
		scanf("%d",&dis[i]);
		int mi=0,ma=0;
		for(int i=0;i<n;i++){
			mi=max(mi,min(dis[i],l-dis[i]));
			ma=max(ma,max(dis[i],l-dis[i]));
		}
		printf("%d %d\n",mi,ma);
	}
	return 0;
}
int max(int x,int y)
{
	if(x>y)return x;
	return y;
}
int min(int x,int y)
{
	if(x>y)return y;
	return x;
}
*/