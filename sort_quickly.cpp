#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 80
int course(int a[], int first, int end)
{
	int i = first;
	int j = end;
	while (i < j)
	{
		if (a[i] > a[j])
		{
			int tmp1 = a[i];
			a[i] = a[j];
			a[j] = tmp1;
			i++;
		}
		j--;
	}
	while (i < j)
	{
		if (a[i] > a[j])
		{
			int tmp2 = a[i];
			a[i] = a[j];
			a[j] = tmp2;
			j--;
		}
		i++;
	}
	return i;
}
void sort(int a[], int first, int end)
{
	if (first < end)
	{
		int result = course(a, first, end);
		sort(a, first, result - 1);
		sort(a, result + 1, end);
	}
}
int main()
{
	int a[MAX] = { 1,7,5,6,3 };
	int n=5;
	int first = 0;
	int end = 4;
	sort(a, first, end);
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}