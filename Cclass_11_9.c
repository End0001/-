//1.输入
//2.运算闰年
//3.输出

#include <stdio.h>

int main()
{

	int i;
	int year;

	printf_s("请输入21世纪中的某一年份：");
	scanf_s("%d", &i);//输入用户需求的截止年份

	

	if (i > 2000 && i < 2100)//判断
	{
		for (year = 2000; year <= i; year++)
		{
			
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)//对符合条件的年份进行计算
			{
				printf("%d\n", year);//输出
			}
			
		}
	}
	else
		printf("请输入21世纪中的有效年份");//用户输入不符的年份时输出提示
}