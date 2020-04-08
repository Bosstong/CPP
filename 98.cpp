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
double anyfun(double(*f)(double), double x)
{
	return (*f)(x);
}

int main()
{
	double x;
	cin >> x;
	cout << anyfun(x2, x) <<" "<<anyfun(mysin,x)<<endl;;
	return 0;
}