
#include <iostream>
using namespace std;
int main()
{
	int max(int a,int b,int c);//函数声明
	double max(double a,double b,double c);//函数声明
	long max(long a,long b,long c);//函数声明
	
	int i1,i2,i3,i;
	cin>>i1>>i2>>i3;//输入3个整数
	i=max(i1,i2,i3);//求3个整数中的最大数
	cout<<"i_max="<<i<<endl;
	
	double d1,d2,d3,d;
	cin>>d1>>d2>>d3;//输入3个双精度数
	d=max(d1,d2,d3);//求3个双精度数中的最大数
	cout<<"d_max="<<d<<endl;
	
	long g1,g2,g3,g;
	cin>>g1>>g2>>g3;//输入3个长整数
	g=max(g1,g2,g3);//求3个长整数中的最大数
	cout<<"g_max="<<g<<endl;
}

int max(int a,int b,int c)//定义求3个整数中的最大数的函数
{
	if(b>a) a=b;
	if(c>a) a=c;
	return a;
}
double max(double a,double b,double c) //定义求3个双精度数中的最大数的函数
{
	if(b>a) a=b;
	if(c>a) a=c;
	return a;
}
long max(long a,long b,long c)//定义求3个长整数中的最大数的函数
{
	if(b>a) a=b;
	if(c>a) a=c;
	return a;
}

/*
	函数重载并不要求函数体相同，重载函数除了允许参数类型不同以外，
	还允许参数的个数不同
*/

/*

运行结果: 
185  -76  567↙ (输入3个整数)
i_max=567(输出3个整数的最大数)

56.87  90.23  -3214.78↙(输入3个实数)
d_max=90.23(输出3个双精度数的最大数)

67854   -912456   673456↙(输入3个长整数)
g_max=673456 (输出3个长整数的最大数)

*/
