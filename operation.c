#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c,x1,x2,p1,p2;//定义变量

	printf("请输入a,b,c的值：");
	scanf_s("%f %f %f", &a, &b, &c);//输入方程内的a，b，c

	float d1 = b * b - 4 * a * c;
	float d2 = 4 * a * c - b * b;

	if (a == 0&&b == 0&& c == 0)
	{
		printf("Zero Equation");
	}
	else if (a == 0&& b == 0&& c != 0)
	{
		printf("Not An Equation");
	}
	
	else if (b * b - 4 * a * c > 0)
	{
			x1 = ( - b + sqrt(d1)) / (2 * a);
			x2 = (-b - sqrt(d1)) / (2 * a);//计算两个根
			printf("有两个实根，分别为：\n%f\n%f\n",x1,x2 );//输出结果
	}
	else if (b * b - 4 * a * c == 0)
	{
			x1 = (-b + sqrt(d1)) / (2 * a);//计算一个实根
			printf("只有一个实根，为：%f\n", x1);
	}
	else if (b * b - 4 * a * c < 0)
	{
			p1 = b / (-2 * a);
			p2 = sqrt(d2) / (2 * a);//计算虚根
			printf("有两个虚根，分别为：\n%.1f+%.1fi\n%.1f-%.1fi\n", p1, p2 , p1, p2);
	}
	
	return 0;
}