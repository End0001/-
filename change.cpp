#include <stdio.h>
#define MAXN 100//�������鳤��
int main()
{
	int a[MAXN],b[MAXN];//������������
	int i,temp,n;//�������
	printf_s("Ҫ���뼸��Ԫ�أ�");//�����ʾ
	scanf_s("%d", &n);//����n
	printf_s("\n����������a��");//�����ʾ
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);//ѭ��������Ԫ����������a
	}
	printf_s("\n����������b��");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &b[i]);//ѭ��������Ԫ����������b
	}
	printf_s("\n����ǰ����aΪ��");
	for (i = 0; i < n; i++)
	{
		printf_s("%d ", a[i]);//�������ǰ������a
	}
	printf_s("\n����ǰ����bΪ��");
	for (i = 0; i < n; i++)
	{
		printf_s("%d ", b[i]);//�������ǰ������b
	}
	for (i = 0; i < n; i++)
	{
		int* pa = &a[i];//��������a��ָ��
		int* pb = &b[i];//��������b��ָ��
		temp = *pa;
		*pa = *pb;
		*pb = temp;//ʵ�ֽ���Ԫ�ز���
	}
	printf_s("\n����������aΪ��");
	for (i = 0; i < n; i++)
	{
		printf_s("%d ", a[i]);//��������������a
	}
	printf_s("\n����������bΪ��");
	for (i = 0; i < n; i++)
	{
		printf_s("%d ", b[i]);//��������������b
	}
	return 0;
}