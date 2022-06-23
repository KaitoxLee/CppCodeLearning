#include <iostream>
using namespace std;
int main()
{
	int year;
	bool leap;
	cout << "please enter year:"; //输出提示
	cin >> year; //输入年份
	if (year % 4 == 0)   //年份能被4整除
	{
		if (year % 100 == 0)   //年份能被4整除又能被100整除
		{
			if (year % 400 == 0) //年份能被4整除又能被400整除
				leap = true; //闰年,令leap=true(真)
			else
				leap = false; //非闰年,令leap=false(假)
		}
		else   //年份能被4整除但不能被100整除肯定是闰年
			leap = true; //是闰年,令leap=true
	}
	else   //年份不能被4整除肯定不是闰年
		leap = false; //若为非闰年,令leap=false

	if (leap)
		cout << year << " is "; //若leap为真,就输出年份和"是"
	else
		cout << year << " is not "; //若leap为真,就输出年份和"不是"
	cout << " a leap year." << endl; //输出"闰年"
	return 0;
}
