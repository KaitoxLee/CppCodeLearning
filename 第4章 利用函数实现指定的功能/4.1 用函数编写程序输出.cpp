#include <iostream>
using namespace std;

void printstar(void)   //定义printstar函数
{
	cout << "****************************" << endl; //输出30个"*"
}

void print_message(void)   //定义print_message函数
{
	cout << "Welcome to C++!" << endl; //输出一行文字
}

int main(void)
{
	printstar();//调用printstar 函数
	print_message();//调用print_message函数
	printstar();//调用printstar 函数
	return 0;
}
