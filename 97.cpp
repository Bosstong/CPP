#include <iostream>
#include <cmath>
using namespace std;
double x2(double x)
{
	return x*x;
}

double mysin(double x)
{
	return 2 * sin(2 * 3.14 * 2 * x + 3.14);
}
int main()
{
	double(*f)(double);
	double x;
	cin >> x;
	f = x2;
	cout << f(x) << " ";
	f = mysin;
	cout << f(x) << endl;
	return 0;
}