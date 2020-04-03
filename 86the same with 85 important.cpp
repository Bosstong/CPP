#include "iostream"

using namespace std;

int input(int a[])
{
	int i = 0,temp;
	while (1)
	{
		cin >> temp;
		if (temp != -9999)
		{
			a[i] = temp;
			i++;
		}
		else return i;
	} 
}

int input(double a[])
{
	int i = 0;
	double temp;
	while (1)
	{
		cin >> temp;
		if (temp != -9999)
		{
			a[i] = temp;
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

void reverse(int a[], int n)
{
	if (n == 1)  return;
	if (n == 2)
	{
		int temp = a[0];
		a[0] = a[1];
		a[1] = temp;
		return;
	}
	else
	{
		int temp;
		temp = a[n - 1];
		reverse(a, n - 1);
		for (int j = n - 1; j > 0; j--)
			a[j] = a[j - 1];
		a[0] = temp;
		return;
	}
}

void reverse(double a[], int n)
{
	if (n == 1)  return;
	if (n == 2)
	{
		double temp = a[0];
		a[0] = a[1];
		a[1] = temp;
		return;
	}
	else
	{
		double temp;
		temp = a[n - 1];
		reverse(a, n - 1);
		for (int j = n - 1; j > 0; j--)
			a[j] = a[j - 1];
		a[0] = temp;
		return;
	}
}

int main()
{
	int ai[100];
	double ad[100];
	int ni, nd;
	ni = input(ai);
	nd = input(ad);
	reverse(ai, ni);
	reverse(ad, nd);
	print(ai, ni);
	print(ad, nd);
	return 0;
}