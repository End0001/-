#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAXN 100//定义数组长度
int main()
{
	char arr1[MAXN];
	char arr2[MAXN];//定义两个数组
	char i=0,j=0,n;//定义变量
	printf("请输入第一串字符：");
	scanf("%s", arr1);
	printf("\n请输入第二串字符：");
	scanf("%s", arr2);//提示用户输入字符串，输入的字符串分别给arr1，arr2
	while (arr1[i] != '\0')//找到arr1中的’\0'
	{
		i++;
		
	}
	while (arr2[j] != '\0')//在arr1的'\0'处将arr2中的元素赋给arr1
	{
		arr1[i++] = arr2[j++];
	}
	arr1[i] = '\0';//在字符串后增加终止符
	printf("\n连接后的字符串为：%s",arr1);//输出连接后的字符串
	return 0;
}