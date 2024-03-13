#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int compare(int *p, int n,int &Max);//函数声明
int main()
{
	int *p,n,Max;//定义指针、数组长度n、最大值
	cin >> n;//输入数组长度n
	p = new int [n];//申请数组内存
	srand(time(NULL));//取随机数
	for (int i = 0; i < n; i++)
	{
		p[i] = rand() % 100;//将随机数赋值给数组元素
	}
	for (int i = 0; i < n; i++)//将数组内容显示，检查函数有没有出错
	{
		cout << p[i]<<" ";
	}
	compare(p, n,Max);//调用函数
	cout <<endl<<"Max:"<< Max;
	delete[]p;//释放内存
	return 0;
}
int compare(int *p,int n,int &Max)
{
	Max = p[0];
	for (int i = 1; i < n; i++)
	{
		if (p[i] > Max)//找数组最大值
		{
			Max = p[i];
		}
	}
	return Max;
}