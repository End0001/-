#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	float num1;
	float num2;

	printf("请输入您要运算的两个数：");
	scanf("%f%f", &num1, &num2);

	float sum = num1 + num2;
	float difference = num1 - num2;
	float product = num1 * num2;
	float quotient = num1 / num2;

	printf("这两个数的和：%f\n差：%f\n乘积：%f\n商：%f\n", sum, difference, product, quotient);
	
	return 0;
}