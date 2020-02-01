/*
输入一个字符串，判断它是否为回文以及镜像串。输入字符串保证不含数字0.
所谓回文串，就是反转之后原串相同，如abba和madam。所谓镜像串，就是左
右镜像之后和原串相同，如2S和3AIAE。注意，并不是每个字符在镜像之后都
能得到一个合法字符，本题中，每个字符的镜像如下所示，（空白项表示该字
符镜像后不能得到一个合法的字符）。
 
原  镜  原  镜  原  镜
A	A	M	M	Y	Y
B	 	N	 	Z	5
C	 	O	O	1	1
D	 	P	 	2	S
E	3	Q	 	3	E
F	 	R	 	4	 
G	 	S	2	5	Z
H	H	T	T	6	 
I	I	U	U	7	 
J	L	V	V	8	8
K	 	W	W	9	 
L	J	X	X	 
样例输入：

NOTAPALINDROME
ISAPALINILAPASI
2A3MEAS
ATOYOTA

样例输出：
NOTAPALINDROME -- is not a palindrome.

ISAPALINILAPASI -- is a regular palindrome.

2A3MEAS -- is a mirrored string.

ATOYOTA -- is a mirrored palindrome.
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char r(char ch);
const char*rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char*msg[] =
{
	"not a palindrome",
	"a regular palindrome",
	"a mirrored string",
	"a mirrored palindrome"
};
int main()
{
	char s[30];
	int len;
	int i;
	int p, m;
	while (scanf("%s", s) == 1)
	{
		 len = strlen(s);
		 p = 1;
		 m = 1;
		for ( i = 0; i < len / 2; i++)
		{
			if (s[i] != s[len - 1 - i])
			{
				p = 0;//对称位置不相等 不是回文词
			}
			if (r(s[i]) != s[len - 1 - i])
			{
				m = 0;//对称位置的镜像不相等 不是镜像串
			}
		}

		if (p == 0 && m == 0)
		{
			printf("%s--is %s.\n\n", s, msg[0]);
		}
		else if (p == 1 && m == 0)
		{
			printf("%s--is %s.\n\n", s, msg[1]);
		}
		else if (p == 0 && m == 1)
		{
			printf("%s--is %s.\n\n", s, msg[2]);
		}
		else if (p == 1 && m == 1)
		{
			printf("%s--is %s.\n\n", s, msg[3]);
		}
		
		//上面的分支语句可以写成一句：printf("%s--is %s.\n\n", s, msg[m * 2 + p]);
	}
	return 0;
}
char r(char ch)
{
	if (isalpha(ch))
	{
		return rev[ch - 'A'];//字母区的镜像
	}
	return rev[ch - '0' + 25];//数字区的镜像
}