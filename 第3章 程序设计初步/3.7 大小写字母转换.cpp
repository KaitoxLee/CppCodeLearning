#include <iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch; //判别ch是否为大写字母,是则转换
	cout << ch << endl;
	return 0;
}

/*
	输入一个字符，判别它是否为大写字母。yes,转换为小写字母；no,转换为大写字母。
*/
/*
	输入：A
	输出：a
*/
