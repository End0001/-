#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAXN 100//�������鳤��
int main()
{
	char arr1[MAXN];
	char arr2[MAXN];//������������
	char i=0,j=0,n;//�������
	printf("�������һ���ַ���");
	scanf("%s", arr1);
	printf("\n������ڶ����ַ���");
	scanf("%s", arr2);//��ʾ�û������ַ�����������ַ����ֱ��arr1��arr2
	while (arr1[i] != '\0')//�ҵ�arr1�еġ�\0'
	{
		i++;
		
	}
	while (arr2[j] != '\0')//��arr1��'\0'����arr2�е�Ԫ�ظ���arr1
	{
		arr1[i++] = arr2[j++];
	}
	arr1[i] = '\0';//���ַ�����������ֹ��
	printf("\n���Ӻ���ַ���Ϊ��%s",arr1);//������Ӻ���ַ���
	return 0;
}