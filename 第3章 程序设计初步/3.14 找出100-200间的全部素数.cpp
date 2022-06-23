#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int m, k, i, n = 0;
	bool prime;//定义布尔变量prime
	for (m = 101; m <= 200; m = m + 2)   // 判别m是否为素数,m由101变化到200,增量为2
	{
		prime = true; //循环开始时设prime为真,即先认为m为素数
		k = int(sqrt(m)); // 用k代表m 的整数部分
		for (i = 2; i <= k; i++) //此循环的作用是将m被2～m 除,检查是否能整除
			if (m % i == 0)   //如果能整除,表示m不是素数
			{
				prime = false; //使prime变为假
				break;//终止执行本循环
			}
		if (prime)   //如果m为素数
		{
			cout << setw(5) << m; //输出素数m,字段宽度为5
			n = n + 1; //n用来累计输出素数的个数
		}
		if (n % 10 == 0)
			cout << endl; //输出10个数后换行
	}
	cout << endl; //最后执行一次换行
	return 0;
}

/*
	  101  103  107  109  113  127  131  137  139  149
	  151  157  163  167  173  179  181  191  193  197
	  199
*/
