#include <iostream>
using namespace std;
int max(int, int); //函数声明
int main()
{
	extern int a, b; //对全局变量a,b作提前引用声明
	cout << max(a, b) << endl;
	return 0;
}
int a = 15, b = -7; //定义全局变量a,b
int max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return z;
}

/*
	15
*/
