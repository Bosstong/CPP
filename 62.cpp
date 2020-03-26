#include <iostream>
using namespace std;
double absolute(double a)
{
	if (a >= 0)
		return a;
	else
		return -a;
}

int main()
{
	double a;
	cin >> a;
	cout << absolute(a) << endl;
	return 0;
}