#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int distance=0;
	int time=0;

	printf("��������̺�ͣ����ʱ�䣺");
	scanf("%d %d", &distance, &time);//������·�̺�ͣ��ʱ��

	if (distance <= 0 || time <= 0)
	{
		printf("��������Чֵ��");//����ֵ����ʱ��ʾ�û�
		return 0;
	}

	int money1=0;
	if (distance <= 3&&distance>0)
	{
		money1 = 10;
	}
	else if (distance > 3 && distance <= 13)//���㲻ͬ·�̵ķ���
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
		money2 = (time / 5)*2 ;//���㲻ͬͣ��ʱ��ķ���
	}

	int total;
	total = money1 + money2;//�����ܷ���
	printf("Ӧ֧������%dԪ", total);//���
	
}
