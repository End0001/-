#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num1,num;//定义第一个数和后面的数
	int sum = 0;
	char ch;
	printf("请输入一个算式：\n");//输出提示
	scanf("%d", &num1);//输入算式第一个数
	sum = num1;

	while ((ch = getchar()) != '=')//判断，如果遇到等于号结束运算
	{
		scanf("%d", &num);//取算式的第一个数、第二个数、第三个数、第四个数......
		switch (ch)
		{
		
		case'+'://如果遇到加号，则与运算和相加
			sum += num;
			break;
		case'-'://如果遇到减号，则与运算和相减
			sum -= num;
			break;
		case'*'://如果遇到乘号，则与运算和相乘
			sum *= num;
			break;
		case'/'://如果遇到除号，则与运算和相除
			if (num == 0)//判断，如果分母等于0，输出提示
			{
				printf("分母不可等于0！\n");
				return 0;
			}
			else
			{
				sum /= num;//分母不等于0，正常运算
				break;
			}
		default:
			printf("请输入正确的运算式！\n");//其他情况，输出提示
			break;
		
		}
		
	}
	printf("%d\n", sum);//正常运算后，输出结果
	return 0;
}