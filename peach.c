#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int main()
{
	int eat();
	int i;
	int peach=0;
	int day;
	printf("�����ڵڼ��췢��ֻʣһ���ң�����д��������");
	scanf("%d", &day);


	for (i = 1; i < day; i++)
	{
		peach = (peach + 1) * 2;
	}
	printf("���ӵ�һ��ժ��%d������", peach+1);
	return 0;
}

