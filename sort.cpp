#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAXN 100//�����������ֵ
int main()
{
	int n, i, j;//�������
	int arr[MAXN] = { 0 };//��������
	printf("Ҫ���뼸������\n");
	scanf("%d", &n);
	printf("������%d������", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);//��������Ԫ��
	}
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (arr[i] > arr[j])//��ǰ��������ں������ʱ������Ƶ�������ֵ��λ��
			{
				int temp;
				temp = arr[i];
				arr[i]=arr[j];
				arr[j] = temp;//��λ����
			}
		}
	}
	printf("\n�����Ϊ��");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);//�������������
	}
	return 0;
}
