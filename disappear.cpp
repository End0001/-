#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define MAXN 100
int main()
{
	char a[MAXN];
	printf ("������һ���ַ�����");
	scanf("%s", a);
	int length = strlen(a);//�����ַ�������
	int i, j;
	for (i = 0; i < length; i++) 
	{
		for (j = i + 1; j < length; j++)
		{//����forѭ���жϵ�i���ַ�����������ͬ�ַ�
			if (a[i] == a[j]) 
			{
				for (int mark = j; mark < length; mark++) 
				{//������ͬ�ַ�����һ�������������ַ���ǰ��
					a[mark] = a[mark + 1];//����һ���ַ���ֵ����ǰ�ַ�
				}
				length--;
				j--;
			}
		}
	}
	printf("���ַ���Ϊ��%s\n", a);
	return 0;
}