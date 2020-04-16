#include <iostream>
using namespace std;
int input(int *p)
{
	int temp, n = 0;
	cin >> temp;
	while (temp != 9999)
	{
		*p = temp;
		p++;
		n++;
		cin >> temp;
	}
	return n;
}

void print(int *p, int n)
{
	cout << *p;
	p++;
	n--;
	while(n)
	{
		cout << " " << *p;
		p++;
		n--;
	}
    cout<<endl;
}

int main()
{
	int a[100],n;
	n = input(a);
	print(a, n);
	return 0;
}