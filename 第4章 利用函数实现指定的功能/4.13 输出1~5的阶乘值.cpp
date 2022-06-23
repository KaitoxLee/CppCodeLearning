#include <iostream>
using namespace std;
int fac(int);//函数声明
int main()
{
	int i;
	for (i = 1; i <= 5; i++)
		cout << i << "!=" << fac(i) << endl;
	return 0;
}
int fac(int n)
{
	static int f = 1; //f为静态局部变量,函数结束时f的值不释放
	f = f*n; //在f原值基础上乘以n
	return f;
}

/*
	
1!=1
2!=2
3!=6
4!=24
5!=120

*/
