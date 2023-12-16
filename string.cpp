#include <stdio.h>
#define MAX 100//定义数组长度
#include <string.h>
char compare(char* a, char* b);//声明函数
int main()
{
	char str1[MAX] ;
	char str2[MAX] ;//定义两个字符数组
	printf_s("请输入第一个字符串：");
	gets_s(str1);//输入第一个字符数组
	printf_s("请输入第二个字符串：");
	gets_s(str2);//输入第二个字符数组
	char ch = compare(str1, str2);//调用函数
	switch(ch)//判断ch的返回值
	{
	case-'1'://如果返回值为-1，则str1<str2
		printf("str1<str2");
		break;
	case'1'://如果返回值为1，则str1>str2
		printf("str1>str2");
		break;
	case'0'://如果返回值0，则str1=str2
		printf("str1=str2");
		break;
	}
	return 0;
}
char compare(char* a, char* b)//定义函数
{
	while (*a != '\0' && *b != '\0')//判断两数组元素都不是终止符
	{
		if (*a != *b)//如果数组1的元素与数组2的元素不同，则进行比较
		{
			if (*a > *b)//如果数组1的元素大于数组2的元素，则返回值1
			{
				char ch = '1';
				return ch;
				break;
			}
			else if (*a < *b)//如果数组1的元素大于数组2的元素，则返回值-1
			{
				char ch = -'1';
				return ch;
				break;
			}
		}
		 if (*a == *b)//如果两数组元素相同，则比较两数组的下一位元素
		{
			 *a++;
			 *b++;
		}
	}
	if (*a == '\0')//如果数组1先遇到终止符，则表明数组1更短，返回值-1
	{
		char ch = '-1';
		return ch;
	}
	else if (*b == '\0')//如果数组2先遇到终止符，则表明数组2更短，返回值1
	{
		char ch = '1';
		return ch;
	}
	else if (*a == '\0' && *b == '\0')//如果数组1，2同时遇到终止符，且经过前面的判断两数组元素都相同，则表明两数组一样长，返回值0
	{
		char ch = '0';
		return ch;
	}
}