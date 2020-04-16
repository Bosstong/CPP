#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double *a = new double[n];
	double *p = a;
	cin >> *p;
	while (*p!=9999)
	{
		p++;
		cin >> *p;
	}
	p=p-1;
	while (p > a)
	{
		cout << *p << " ";
		p--;
	}
	cout << *p;
	delete[]a;
	return 0;
}