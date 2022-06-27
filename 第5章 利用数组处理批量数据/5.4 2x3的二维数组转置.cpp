#include <iostream>
using namespace std;
int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int b[3][2], i, j;
	cout << "array a:" << endl;
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			cout << a[i][j] << " "; //输出a[i][j] 元素
			b[j][i] = a[i][j]; //将a数组j行i列元素的值赋给b数组i行j列元素
		}
		cout << endl;
	}
	cout << "array b:" << endl;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 1; j++)
			cout << b[i][j] << " "; //按行输出b数组中各元素
		cout << endl;
	}
	return 0;
}

/*
	
array a:
1 2 3
4 5 6
array b:
1 4
2 5
3 6

*/
