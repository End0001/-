#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;//�������Ӷ���
	printf("���������Ӷ�����");
	scanf("%d", &n);//�������Ӷ���
	int count=0,yesterday=1, yyesterday=1, month=1;
	if (n == 1)
	{
		printf("��һ����ʱ�ﵽһ��");//��һ����һ��
	}
	else
	{
		do
		{
			month++;
			count = yyesterday + yesterday;
			yyesterday = yesterday;
			yesterday = count;//������������
		} while (count <= n);
		printf("��%d����ʱ���������ﵽ%d��", month, n);//������
	}
	return 0;
}