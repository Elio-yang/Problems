#include<stdio.h>
int main()
{
	int x;
	int n;
	scanf("%d %d", &x, &n);
	int a, b;
	long long ans = 0;
	if ((n - 7 + x) <= 0)
	{
		if (x <= 5)
		{
			ans = ((5 - x) + 1) * 250;
		}
		else if (x >= 6 || x <= 7)
		{
			ans = 0;
		}

	}
	else
	{
		a = (n - 7 + x) / 7;
		b = (n - 7 + x) % 7;
		
		if (b <= 5)
		{
			if (x <= 5)
			{
				ans = 5 * a * 250 + b * 250+((5-x)+1)*250;
			}
			else
			{
				ans = 5 * a * 250 + b * 250;
			}
		}
		else if (b >= 6)
		{
			if (x <= 5)
			{
				ans = 5 * a * 250 + 5 * 250 + ((5 - x) + 1) * 250;
			}
			else
			{
				ans = 5 * a * 250 + 5 * 250;
			}
			
		}
	}

	printf("%d", ans);



	return 0;
}