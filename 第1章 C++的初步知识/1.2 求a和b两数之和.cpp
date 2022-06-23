// 求两数之和(本行是注释行)
#include <iostream>//预处理指令
using namespace std;//使用命名空间std
int main()   //主函数首部
{
	//函数体开始
	int a, b, sum; //定义变量
	cin >> a >> b; //输入变量a和b的值
	sum = a + b; //赋值语句
	cout << a << "+" << b << "=" << sum << endl; //输出语句
	return 0;//如程序正常结束,向操作系统返回一个零值
}//函数结束

/*
	输入：123 456
	输出：123+456=579
*/
