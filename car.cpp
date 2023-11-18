#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

double distance(double x, double y)//函数定义
{
	static double x0 = 0;
	static double y0 = 0;//定义用于存储上一次x，y值的x0，y0
	double result = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));//计算路程
	x0 = x;
	y0 = y;//存储上一次坐标值
	return result;//返回结果
}
int main()
{
	double x = 0;
	double y = 0;//定义变量坐标
	double sum = 0;//定义路程和
	
	A:
	printf("请输入坐标值（x,y)：");
	scanf("%lf %lf", &x, &y);//输入下一次坐标值

	if (x < 9999 && y < 9999)//判断，小于9999时进行运算
	{
		double result = distance(x, y);//调用distance函数
		sum = sum + result;//路程累加
		printf("累计路程为：%.2f\n", sum);//输出累加后的路程
		goto A;//回到A行
	}
	else
	{
		printf("结束\n");//判断，大于9999时结束程序
		return 0;
	}
	return 0;
}