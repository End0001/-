#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int compare(int *p, int n,int &Max);//��������
int main()
{
	int *p,n,Max;//����ָ�롢���鳤��n�����ֵ
	cin >> n;//�������鳤��n
	p = new int [n];//���������ڴ�
	srand(time(NULL));//ȡ�����
	for (int i = 0; i < n; i++)
	{
		p[i] = rand() % 100;//���������ֵ������Ԫ��
	}
	for (int i = 0; i < n; i++)//������������ʾ����麯����û�г���
	{
		cout << p[i]<<" ";
	}
	compare(p, n,Max);//���ú���
	cout <<endl<<"Max:"<< Max;
	delete[]p;//�ͷ��ڴ�
	return 0;
}
int compare(int *p,int n,int &Max)
{
	Max = p[0];
	for (int i = 1; i < n; i++)
	{
		if (p[i] > Max)//���������ֵ
		{
			Max = p[i];
		}
	}
	return Max;
}