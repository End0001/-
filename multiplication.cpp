#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX1 2
#define MAX2 3
#define MAX3 3//�������鳤��
int main()
{
	int arr1[MAX2][MAX1];
	int arr2[MAX1][MAX3];
	int arr3[MAX2][MAX3] = { 0 };//����������ά����
	int i, j,k;//�������
	printf("�������һ�����飨6��������");//�����ʾ
	for (i = 0; i < MAX2; i++)
	{
		for (j = 0; j < MAX1; j++)
		{
			scanf("%d", &arr1[i][j]);//ѭ����Ԫ����������arr1
		}
	}
	printf("������ڶ������飨6��������");
	for (i = 0; i < MAX1; i++)
	{
		for (j = 0; j < MAX3; j++)
		{
			scanf("%d", &arr2[i][j]);//ѭ����Ԫ����������arr2
		}
	}
	for (i = 0; i < MAX2; i++)
	{
		for (j = 0; j < MAX3; j++)
		{
			for (k = 0; k < MAX1; k++)
			{
				arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];//����˷����㲢���������arr3
			}
		}
	}
	printf("���������˷��Ľ��Ϊ��\n");
	for (i = 0; i < MAX2; i++)
	{
		for (j = 0; j < MAX3; j++)
		{
			printf("%2d ", arr3[i][j]);//��arr3�еĽ�����
		}
		printf("\n");
	}
	return 0;
}