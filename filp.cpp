#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define MAX 100
void filp( char Arr[],int first,int end,int Mid)
{
	if (first <= Mid)
	{
		char temp = Arr[first];
		Arr[first] = Arr[end];
		Arr[end] = temp;
		first++;
		end--;
		filp(Arr, first, end, Mid);
	}
}
int main()
{
	char Arr[MAX]="\0";
	int first=0, end;
	printf("�������ַ���:");
	gets_s(Arr);
	end = strlen(Arr);
	int Mid = strlen(Arr) / 2;
	filp(Arr, first, end, Mid);
	printf("\n��ת����ַ���Ϊ��");
	for (int i = 0; i <= end; i++)
	{
		printf("%c", Arr[i]);
	}
	return 0;
}