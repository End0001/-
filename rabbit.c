#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;//定义兔子对数
	printf("请输入兔子对数：");
	scanf("%d", &n);//输入兔子对数
	int count=0,yesterday=1, yyesterday=1, month=1;
	if (n == 1)
	{
		printf("第一个月时达到一对");//第一个月一对
	}
	else
	{
		do
		{
			month++;
			count = yyesterday + yesterday;
			yyesterday = yesterday;
			yesterday = count;//运算兔子生崽
		} while (count <= n);
		printf("第%d个月时兔子总数达到%d对", month, n);//输出结果
	}
	return 0;
}