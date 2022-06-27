#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	void smallest_string(char str[][30], int i); //函数声明
	char country_name[3][30];//定义二维字符数组
	for (int i = 0; i < 3; i++)
		cin >> country_name[i]; //输入3个国家名
	smallest_string(country_name, 3); //调用smallest_string函数
	return 0;
}

void smallest_string(char str[][30], int n)
{
	int i;
	char string[30];
	strcpy(string, str[0]); //使string的值为str[0]的值
	for (i = 0; i < n; i++)
		if (strcmp(str[i], string) < 0) //如果str[i]<string
			strcpy(string, str[i]); //将str[i]中的字符串复制到string
	cout << endl << "the smallest string is:" << string << endl;
	//输出"最小"的字符串
}

/*
	
GERMANY
FRANCH
CHINA

*/
