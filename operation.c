#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c,x1,x2,p1,p2;//�������

	printf("������a,b,c��ֵ��");
	scanf_s("%f %f %f", &a, &b, &c);//���뷽���ڵ�a��b��c

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
			x2 = (-b - sqrt(d1)) / (2 * a);//����������
			printf("������ʵ�����ֱ�Ϊ��\n%f\n%f\n",x1,x2 );//������
	}
	else if (b * b - 4 * a * c == 0)
	{
			x1 = (-b + sqrt(d1)) / (2 * a);//����һ��ʵ��
			printf("ֻ��һ��ʵ����Ϊ��%f\n", x1);
	}
	else if (b * b - 4 * a * c < 0)
	{
			p1 = b / (-2 * a);
			p2 = sqrt(d2) / (2 * a);//�������
			printf("������������ֱ�Ϊ��\n%.1f+%.1fi\n%.1f-%.1fi\n", p1, p2 , p1, p2);
	}
	
	return 0;
}