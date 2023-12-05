#include <stdio.h>
#define MAXN 100//定义数组长度
int main()
{
	int a[MAXN],b[MAXN];//定义两个数组
	int i,temp,n;//定义变量
	printf_s("要输入几个元素？");//输出提示
	scanf_s("%d", &n);//输入n
	printf_s("\n请输入数组a：");//输出提示
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);//循环将数组元素输入数组a
	}
	printf_s("\n请输入数组b：");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &b[i]);//循环将数组元素输入数组b
	}
	printf_s("\n交换前数组a为：");
	for (i = 0; i < n; i++)
	{
		printf_s("%d ", a[i]);//输出交换前的数组a
	}
	printf_s("\n交换前数组b为：");
	for (i = 0; i < n; i++)
	{
		printf_s("%d ", b[i]);//输出交换前的数组b
	}
	for (i = 0; i < n; i++)
	{
		int* pa = &a[i];//定义数组a的指针
		int* pb = &b[i];//定义数组b的指针
		temp = *pa;
		*pa = *pb;
		*pb = temp;//实现交换元素步骤
	}
	printf_s("\n交换后数组a为：");
	for (i = 0; i < n; i++)
	{
		printf_s("%d ", a[i]);//输出交换后的数组a
	}
	printf_s("\n交换后数组b为：");
	for (i = 0; i < n; i++)
	{
		printf_s("%d ", b[i]);//输出交换后的数组b
	}
	return 0;
}