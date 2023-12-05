#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX1 2
#define MAX2 3
#define MAX3 3//定义数组长度
int main()
{
	int arr1[MAX2][MAX1];
	int arr2[MAX1][MAX3];
	int arr3[MAX2][MAX3] = { 0 };//定义三个二维数组
	int i, j,k;//定义变量
	printf("请输入第一个数组（6个数）：");//输出提示
	for (i = 0; i < MAX2; i++)
	{
		for (j = 0; j < MAX1; j++)
		{
			scanf("%d", &arr1[i][j]);//循环将元素输入数组arr1
		}
	}
	printf("请输入第二个数组（6个数）：");
	for (i = 0; i < MAX1; i++)
	{
		for (j = 0; j < MAX3; j++)
		{
			scanf("%d", &arr2[i][j]);//循环将元素输入数组arr2
		}
	}
	for (i = 0; i < MAX2; i++)
	{
		for (j = 0; j < MAX3; j++)
		{
			for (k = 0; k < MAX1; k++)
			{
				arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];//矩阵乘法运算并将结果存入arr3
			}
		}
	}
	printf("两数组矩阵乘法的结果为：\n");
	for (i = 0; i < MAX2; i++)
	{
		for (j = 0; j < MAX3; j++)
		{
			printf("%2d ", arr3[i][j]);//将arr3中的结果输出
		}
		printf("\n");
	}
	return 0;
}