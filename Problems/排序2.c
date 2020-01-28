#include<stdio.h>

int inBit(int *bit, int num);

int BitSize;
int main()
{
	

	//Local variables
	int bit[9];
	int i;
	int iter;

	for (i = 123; i < 333; i++) 
	{
		bit[0] = i / 100;//百位数字
		bit[1] = (i / 10) % 10;//十位数字
		bit[2] = i % 10;//个位数字
		//利用数组存储第一个数的各个位

		int status = 1;
		BitSize = 3;

		int j = 2 * i;
		int k = 3 * i;
		//1：2：3的关系

		int temp[6];
		temp[0] = j / 100;
		temp[1] = (j / 10) % 10;
		temp[2] = j % 10;
		//第二个数

		temp[3] = k / 100;
		temp[4] = (k / 10) % 10;
		temp[5] = k % 10;
		//第三个数

		for ( iter = 0; iter < 6; iter++) 
		{
			if (inBit(bit, temp[iter])) {//If repeated
				status = 0;
				break;
			}
			else 
			{
				bit[BitSize++] = temp[iter];//将后续的temp存入bit
			}
		}

		if (status) 
		{
			printf("%d %d %d\n", i, j, k);
		} 
	}

	return 0;
}

int inBit(int *bit, int num) //If repeated，return 1
{
	for (int i = 0; i < BitSize; i++) 
	{
		if (num == bit[i]) 
		{
			return 1;
		}
	}
	return 0;
}