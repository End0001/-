#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define MAXN 100
int main()
{
	char a[MAXN];
	printf ("请输入一个字符串：");
	scanf("%s", a);
	int length = strlen(a);//计算字符串长度
	int i, j;
	for (i = 0; i < length; i++) 
	{
		for (j = i + 1; j < length; j++)
		{//利用for循环判断第i个字符后面有无相同字符
			if (a[i] == a[j]) 
			{
				for (int mark = j; mark < length; mark++) 
				{//如有相同字符则定义一个变量，后面字符向前移
					a[mark] = a[mark + 1];//将下一个字符赋值给当前字符
				}
				length--;
				j--;
			}
		}
	}
	printf("新字符串为：%s\n", a);
	return 0;
}