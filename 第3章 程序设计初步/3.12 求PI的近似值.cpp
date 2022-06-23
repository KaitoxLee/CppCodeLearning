#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// pi/4=1-1/3+1/5-1/7+1/9...

int main()
{
	int s = 1;
	double n = 1, t = 1, pi = 0;
	while (fabs(t) > 1e-9)
	{
		pi = pi + t;
		n = n + 2;
		s = -s;
		t = s / n;
	}
	pi = pi * 4;
	cout << "pi=" << setiosflags(ios::fixed) << setprecision(10) << pi << endl;
	return 0;
}

/*
	运行结果:
	pi=3.1415926516
*/
