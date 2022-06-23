/*
	有5个人坐在一起，问第5个人多少岁？
	第5个人比第4个人大两岁；
	第4个人比第3个人大两岁；
	第3个人比第2个人大两岁；
	第2个人比第1个人大两岁；
	第1个人=10岁；
*/
#include <iostream>
using namespace std;
int age(int);//函数声明
int main()// 主函数
{
	cout<<age(5)<<endl;
	return 0;
}

int age(int n)//求年龄的递归函数
{
	int c;// 用c作为存放年龄的变量
	if(n==1) 
		c=10;// 当n=1时,年龄为10
	else 
		c=age(n-1)+2;// 当n＞1时,此人年龄是他前一个人的年龄加2
	return c;// 将年龄值带回主函数
}
