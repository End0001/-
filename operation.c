#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	float num1;
	float num2;

	printf("��������Ҫ�������������");
	scanf("%f%f", &num1, &num2);

	float sum = num1 + num2;
	float difference = num1 - num2;
	float product = num1 * num2;
	float quotient = num1 / num2;

	printf("���������ĺͣ�%f\n�%f\n�˻���%f\n�̣�%f\n", sum, difference, product, quotient);
	
	return 0;
}