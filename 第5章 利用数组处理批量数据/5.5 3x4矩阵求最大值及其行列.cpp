#include <iostream>
using namespace std;
int main()
{
	int i, j, row = 0, colum = 0, max;
	int a[3][4] = {{5, 12, 23, 56}, {19, 28, 37, 46}, {-12, -34, 6, 8}};
	max = a[0][0]; //使max开始时取a[0][0]的值
	for (i = 0; i <= 2; i++) //从第0行~第2行
		for (j = 0; j <= 3; j++) //从第0列~第3列
			if (a[i][j] > max) //如果某元素大于max
			{
				max = a[i][j]; //max将取该元素的值
				row = i; //记下该元素的行号i
				colum = j; //记下该元素的列号j
			}
	cout << "max=" << max << ",row=" << row << ",colum=" << colum << endl;
	return 0;
}
