#include <iostream>
#include <string>
using namespace std;
int main()
{
	string string1, string2, string3, temp;
	cout << "please input three strings:"; //这是对用户输入的提示
	cin >> string1 >> string2 >> string3; //输入3个字符串
	if (string2 > string3)
	{
		temp = string2;    //使串2≤串3
		string2 = string3;
		string3 = temp;
	}
	if (string1 <= string2) 
		cout << string1 << " " << string2 << " " << string3 << endl;
	//如果串1≤串2,则串1≤串2≤串3
	else if (string1 <= string3) 
		cout << string2 << " " << string1 << " " << string3 << endl;
	//如果串1＞串2,且串1≤串3,则串2＜串1≤串3
	else 
		cout << string2 << " " << string3 << " " << string1 << endl;
	//如果串1＞串2,且串1＞串3,则串2＜串3＜串3
}

/*
	输入：China U.S.A. Germany
	输出：China Germany U.S.A.
*/
