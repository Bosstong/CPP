#include <iostream>
using namespace std;
int input(int a[])
{
	int i = 0;
    int x;
	while (1)
	{
		cin >> x;
		if (x != -9999)
		{
			a[i] = x;
			i++;
		}
		else return i;
	} 
}

int input(double a[])
{
	int i = 0;
	double x;
	while (1)
	{
		cin >> x;
		if (x != -9999)
		{
			a[i] = x;
			i++;
		}
		else return i;
	}
}

void print(int a[], int n)
{
	int i;
	for (i = 0; i < n - 1;i++)
	{
		cout << a[i]<<" ";
	}
	cout << a[i] << endl;
}

void print(double a[], int n)
{
	int i;
	for (i = 0; i < n - 1; i++)
	{
		cout << a[i] << " ";
	}
	cout << a[i] << endl;
}

int main()
{
	int c[100];
	double d[100];
	int y, z;
	y = input(c);
	z = input(d);
	print(c, y);
	print(d, z);
	return 0;
}