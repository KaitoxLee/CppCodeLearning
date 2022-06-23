#include <iostream>
using namespace std;
int main()
{
	int max(int a, int b, int c = 0); //函数声明,形参c有默认值
	int a, b, c;
	cin >> a >> b >> c;
	cout << "max(a,b,c)=" << max(a, b, c) << endl; //输出3个数中的最大数
	cout << "max(a,b)=" << max(a, b) << endl; //输出两个数中的最大数
	return 0;
}
int max(int a, int b, int c) //函数定义
{
	if (b > a) 
		a = b;
	if (c > a) 
		a = c;
	return a;
}

/*
	
输入：
	14 -56 135↙
输出：
	max(a,b,c)=135
	max(a,b)=14

*/
