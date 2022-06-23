#include <iostream>
using namespace std;
#define PRICE 30//注意这不是语句,末尾不要加分号
int main ( )
{
	int num, total; //num代表购货数量,total代表总货款
	num = 10;
	total = num * PRICE; //PRICE是符号常量,代表30(单价)
	cout << "total=" << total << endl;
	return 0;
}

/*
	输出：total=300
*/
