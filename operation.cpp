#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num1,num;//�����һ�����ͺ������
	int sum = 0;
	char ch;
	printf("������һ����ʽ��\n");//�����ʾ
	scanf("%d", &num1);//������ʽ��һ����
	sum = num1;

	while ((ch = getchar()) != '=')//�жϣ�����������ںŽ�������
	{
		scanf("%d", &num);//ȡ��ʽ�ĵ�һ�������ڶ��������������������ĸ���......
		switch (ch)
		{
		
		case'+'://��������Ӻţ�������������
			sum += num;
			break;
		case'-'://����������ţ�������������
			sum -= num;
			break;
		case'*'://��������˺ţ�������������
			sum *= num;
			break;
		case'/'://����������ţ�������������
			if (num == 0)//�жϣ������ĸ����0�������ʾ
			{
				printf("��ĸ���ɵ���0��\n");
				return 0;
			}
			else
			{
				sum /= num;//��ĸ������0����������
				break;
			}
		default:
			printf("��������ȷ������ʽ��\n");//��������������ʾ
			break;
		
		}
		
	}
	printf("%d\n", sum);//���������������
	return 0;
}