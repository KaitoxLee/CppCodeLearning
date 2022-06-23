#include <iostream>
#include <cmath>//使用数学函数时要包含头文件cmath
#include <iomanip>//使用I/O流控制符要包含头文件iomanip
using namespace std;
int main()
{
	double a, b, c;
	cout << "please enter a,b,c:";
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && c + a > b)   // 保证是三角形
	{
		//复合语句开始
		double s, area; //在复合语句内定义变量
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));

		cout << setiosflags(ios::fixed); //指定输出的数包含4位小数
		cout << "area=" << area << endl; //在复合语句内输出局部变量的值
	}//复合语句结束
	else cout << "it is not a trilateral!" << endl;
	return 0;
}

/*
运行结果:
please enter a,b,c:3 4 5
area=area=area=6.000000
*/
