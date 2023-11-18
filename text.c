#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int distance=0;
	int time=0;

	printf("请输入里程和停车总时间：");
	scanf("%d %d", &distance, &time);//输入总路程和停车时间

	if (distance <= 0 || time <= 0)
	{
		printf("请输入有效值！");//输入值不符时提示用户
		return 0;
	}

	int money1=0;
	if (distance <= 3&&distance>0)
	{
		money1 = 10;
	}
	else if (distance > 3 && distance <= 13)//运算不同路程的费用
	{
		money1 = 10 + (distance - 3) * 2;
	}
	else if(distance > 13)
	{
		money1 = 30 + (distance - 13) * 3;
	}

	int money2=0;
	if (time < 5&& time>0)
	{
		money2 = 0;
	}
	else if (time >= 5)
	{
		money2 = (time / 5)*2 ;//计算不同停车时间的费用
	}

	int total;
	total = money1 + money2;//计算总费用
	printf("应支付车费%d元", total);//输出
	
}
