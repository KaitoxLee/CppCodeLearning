#include <iostream>
using namespace std;
int max(int x, int y)   //定义有参函数max
{
	int z;
	z = x > y ? x : y;
	return (z);
}
int main()
{
	int a, b, c;
	cout << "please enter two integer numbers:";
	cin >> a >> b;
	c = max(a, b); //调用max函数,给定实参为a,b。函数值赋给c
	cout << "max=" << c << endl;
	return 0;
}
