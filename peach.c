#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int main()
{
	int eat();
	int i;
	int peach=0;
	int day;
	printf("猴子在第几天发现只剩一个桃？（请写出天数）");
	scanf("%d", &day);


	for (i = 1; i < day; i++)
	{
		peach = (peach + 1) * 2;
	}
	printf("猴子第一天摘了%d个桃子", peach+1);
	return 0;
}

