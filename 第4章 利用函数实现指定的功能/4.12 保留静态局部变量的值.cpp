#include <iostream>
using namespace std;
int f(int a)//定义f函数,a为形参
{
	auto b = 0; //定义b为自动变量
	static int c = 3; //定义c为静态局部变量
	b=b+1;
	c = c + 1;
	return a + b + c;
}

int main()
{
	int a = 2;
	for (int i = 0; i < 3; i++)
		cout << f(a) << " ";
	cout << endl;
	return 0;
}

/*
	7 8 9
*/
