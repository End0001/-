#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAXN 100//定义数组最大值
int main()
{
	int n, i, j;//定义变量
	int arr[MAXN] = { 0 };//定义数组
	printf("要输入几个数？\n");
	scanf("%d", &n);
	printf("请输入%d个数：", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);//输入数组元素
	}
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (arr[i] > arr[j])//当前面的数大于后面的数时，向后移到相对最大值的位置
			{
				int temp;
				temp = arr[i];
				arr[i]=arr[j];
				arr[j] = temp;//换位步骤
			}
		}
	}
	printf("\n排序后为：");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);//输出排序后的数组
	}
	return 0;
}
