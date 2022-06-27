#include <iostream>
using namespace std;
int main()
{
	void select_sort(int array[], int n); //函数声明
	int a[10], i;
	cout << "enter the originl array:" << endl;
	for (i = 0; i < 10; i++) //输入10个数
		cin >> a[i];
	cout << endl;
	select_sort(a, 10); //函数调用,数组名作实参
	cout << "the sorted array:" << endl;
	for (i = 0; i < 10; i++) //输出10个已排好序的数
		cout << a[i] << " ";
	cout << endl;
	return 0;
}

void select_sort(int array[], int n) //形参array是数组名
{
	int i, j, k, t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (array[j] < array[k]) k = j;
		t = array[k];
		array[k] = array[i];
		array[i] = t;
	}
}

/*
输入：6 9 -2 56 87 11 -54 3 0 77
输出：-54 -2 0 3 6 9 11 56 77 87
*/
