#include <iostream>
using namespace std;

int main()
{
	int i, a[10];
	for (i = 0; i <= 9; i++)
		a[i] = i; //使a[0]~a[9]的值为0～9
	for (i = 9; i >= 0; i--)
		cout << a[i] << " "; //按a[9],a[8],a[7],…,a[0] 的顺序输出
	cout << endl; //换行
	return 0;
}
