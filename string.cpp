#include <stdio.h>
#define MAX 100//�������鳤��
#include <string.h>
char compare(char* a, char* b);//��������
int main()
{
	char str1[MAX] ;
	char str2[MAX] ;//���������ַ�����
	printf_s("�������һ���ַ�����");
	gets_s(str1);//�����һ���ַ�����
	printf_s("������ڶ����ַ�����");
	gets_s(str2);//����ڶ����ַ�����
	char ch = compare(str1, str2);//���ú���
	switch(ch)//�ж�ch�ķ���ֵ
	{
	case-'1'://�������ֵΪ-1����str1<str2
		printf("str1<str2");
		break;
	case'1'://�������ֵΪ1����str1>str2
		printf("str1>str2");
		break;
	case'0'://�������ֵ0����str1=str2
		printf("str1=str2");
		break;
	}
	return 0;
}
char compare(char* a, char* b)//���庯��
{
	while (*a != '\0' && *b != '\0')//�ж�������Ԫ�ض�������ֹ��
	{
		if (*a != *b)//�������1��Ԫ��������2��Ԫ�ز�ͬ������бȽ�
		{
			if (*a > *b)//�������1��Ԫ�ش�������2��Ԫ�أ��򷵻�ֵ1
			{
				char ch = '1';
				return ch;
				break;
			}
			else if (*a < *b)//�������1��Ԫ�ش�������2��Ԫ�أ��򷵻�ֵ-1
			{
				char ch = -'1';
				return ch;
				break;
			}
		}
		 if (*a == *b)//���������Ԫ����ͬ����Ƚ����������һλԪ��
		{
			 *a++;
			 *b++;
		}
	}
	if (*a == '\0')//�������1��������ֹ�������������1���̣�����ֵ-1
	{
		char ch = '-1';
		return ch;
	}
	else if (*b == '\0')//�������2��������ֹ�������������2���̣�����ֵ1
	{
		char ch = '1';
		return ch;
	}
	else if (*a == '\0' && *b == '\0')//�������1��2ͬʱ������ֹ�����Ҿ���ǰ����ж�������Ԫ�ض���ͬ�������������һ����������ֵ0
	{
		char ch = '0';
		return ch;
	}
}