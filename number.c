#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int prime(int i);
int main(void)
{
	int m,n,i;
	int sum = 0;
	int count = 0;
	

	printf("������������m��n��\n");
	scanf("%d %d", &m,&n);

	if (1 <= m && m <= n && n <= 500)
	{
		for (i=m; i <= n; i++)
		{

			if (prime(i) == 1)
			{
				count++;
				printf("%d\n", i);
				sum = sum + i;
			}
			
		}
		printf("һ����%d������\n", count);
		printf("�⼸�����ĺ�Ϊ��%d\n", sum);	
	}
	else
	{
		printf("��������Чֵ(1<=m<=n<=500)\n");
	}
}
int prime(int i)
{
	int number = 0;
	for (number = 2; number < i; number++)
	{
		if (i % number == 0)
			return 0;
	}
	return 1;
}