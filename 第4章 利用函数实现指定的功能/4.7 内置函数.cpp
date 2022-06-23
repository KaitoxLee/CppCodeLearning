#include <iostream>
using namespace std;
inline int max(int,int, int);//声明内置函数,注意左端有inline
int main()
{
	int i=10,j=20,k=30,m;
	m=max(i,j,k);
	cout<<"max="<<m<<endl;
	return 0;
}
inline int max(int a,int b,int c)//定义max为内置函数
{
	if(b>a) a=b;//求a,b,c中的最大数
	if(c>a) a=c;
	return a;
}

/*
	只有那些规模较小而又被频繁调用的简单函数
	才适合于声明为inline函数(一般5个语句以下)
*/
