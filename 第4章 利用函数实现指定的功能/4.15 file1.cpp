#include <iostream>
using namespace std;

int main()
{
	extern int max_outer(int, int); //声明在本函数中将要调用在其他文件中定义的max函数
	int a, b;
	cin >> a >> b;
	cout << max_outer(a, b) << endl;
	return 0;
}
