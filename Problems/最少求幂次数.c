#include <stdio.h>
int main()
{
	int count = 0;
	int n;
	scanf("%d", &n);//n��ָ��
	while (n != 1)
	{
		if (n % 2 != 0)//����
		{
			n -= 1; count++;
		}
		else//ż�� 
		{
			n /= 2; count++;
		}
	}

	printf("%d\n", count);

	return 0;
}

/*Algorithm Analysis: O(logN)*/
