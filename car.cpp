#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

double distance(double x, double y)//��������
{
	static double x0 = 0;
	static double y0 = 0;//�������ڴ洢��һ��x��yֵ��x0��y0
	double result = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));//����·��
	x0 = x;
	y0 = y;//�洢��һ������ֵ
	return result;//���ؽ��
}
int main()
{
	double x = 0;
	double y = 0;//�����������
	double sum = 0;//����·�̺�
	
	A:
	printf("����������ֵ��x,y)��");
	scanf("%lf %lf", &x, &y);//������һ������ֵ

	if (x < 9999 && y < 9999)//�жϣ�С��9999ʱ��������
	{
		double result = distance(x, y);//����distance����
		sum = sum + result;//·���ۼ�
		printf("�ۼ�·��Ϊ��%.2f\n", sum);//����ۼӺ��·��
		goto A;//�ص�A��
	}
	else
	{
		printf("����\n");//�жϣ�����9999ʱ��������
		return 0;
	}
	return 0;
}