#include <iostream>
using namespace std;
int main()
{
	float add(float x, float y); //对add函数作声明
	float a, b, c;
	cout << "please enter a,b:";
	cin >> a >> b;
	c = add(a, b);
	cout << "sum=" << c << endl;
	return 0;
}
float add(float x, float y)   //定义add函数
{
	float z;
	z = x + y;
	return (z);
}

/*
输入：	please enter a,b:123.68 456.45
输出：	sum=580.13
*/
