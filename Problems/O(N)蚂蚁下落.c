/*
��һ����ΪL��ˮƽľ������һȺ����Ϊn�����ϣ�������ÿ��1cm/s���ٶ��ߵ�ľ��һ�˾ͻ����ȥ��
����֪�����ǵ���ʼλ���Ǿ���ľ����˵�� x_i �������ǲ�֪���������еķ�����������е���ֻ
�������������ǻ��ͷ���������ߡ����������϶�����ľ�������ʱ�������ʱ�䡣
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
	�ܹ�ʹ��ȫ��������ȥ�����ʱ�䣬����ֻ�������ҳ����ʱ�䣬
	��Ҫ��֤ȫ��������ȥ������Ҫ���ܹ�������ȫ����ȥ�����ʱ��
	��������ʱ�䣬����Ҫȡ��Сֵ��������:
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
	/*���ʱ��ֻ��Ҫ�ҵ����Ͼ������˵�������Ϳ�*/
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