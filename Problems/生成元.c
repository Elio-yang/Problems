/*
���x����x�ĸ�λ����֮�͵���y���ͳ�x��y������Ԫ��
����198��216������Ԫ��
*/
#include<stdio.h>
#include<string.h>
#define MAX 100010
int main()
{
	int n, i, x, y;
	int ans[MAX];
	memset(ans, 0, sizeof(ans));
	for (i = 1; i <= MAX; i++)
	{
		x = i;//��ʱ��i�ǵ�������Ԫȥ����  ��ԭ�ɱ������Ǹ���
		y = i;		
		while (y > 0)
		{
			x += y % 10;
			y /= 10;//x��ͨ������Ԫ���廹ԭ����Ǹ���
		}
		if (ans[x] == 0||i<ans[x])
		{
			ans[x] = i;//x�����������Ҳ����ͨ������Ԫ��ԭ���Ǹ�����i��������Ԫ
		}
	}
	while (scanf("%d", &n) == 1)
	{
		printf("%d\n", ans[n]);
	}
	
	return 0;
}