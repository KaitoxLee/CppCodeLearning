#include <iostream>
using namespace std;
int main()

{
	int max_value(int x, int max); //函数声明
	int i, j, row = 0, colum = 0, max;
	int a[3][4] = {{5, 12, 23, 56}, {19, 28, 37, 46}, {-12, -34, 6, 8}}; //数组初始化
	max = a[0][0];
	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 3; j++)
		{
			max = max_value(a[i][j], max); //调用max_value函数
			if (max == a[i][j]) //如果函数返回的是a[i][j]的值
			{
				row = i; //记下该元素行号i
				colum = j; //记下该元素列号j
			}
		}
	cout << "max=" << max << ",row=" << row << ",colum=" << colum << endl;
}
int max_value(int x, int max) //定义max_value函数
{
	if (x > max) return x; //如果x>max,函数返回值为x
	else return max;//如果x≤max,函数返回值为max
}
