#include <iostream>
int main()
{
	int max_4(int a, int b, int c, int d); //max_4函数的声明
	int a, b, c, d, max;
	printf("Please enter 4 interger numbers:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	max = max_4(a, b, c, d); //调用max_4函数,得到4个数中的最大数,赋给变量max
	printf("max=%d\n", max);
	return 0;
}
int max_4(int a, int b, int c, int d)   // 定义max_4函数
{
	int max(int, int); // max函数的声明
	int m;
	m = max(a, b); // 调用max函数,找出a和b中的大者
	m = max(m, c); // 调用max函数,找出a,b,c中的大者
	m = max(m, d); // 调用max函数,找出a,b,c,d中的大者
	return (m); // 函数返回值是4个数中的最大数
}
int max(int x, int y)   // 定义max函数
{
	if (x > y)
		return x;
	else
		return y;// 函数返回值是x和y中的大者
}
