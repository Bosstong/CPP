#include <iostream>
using namespace std;
int in(int a[])
{
	int i = 0,n;
	while (1)
	{
		cin >> n;
		if (n != -9999)
		{
			a[i] = n; 
			i++;
		}
		else
		{
			break;
		}
	}
	return i;
}

void out(int a[],int n)
{
	int i = 0;
	for (i = 0; i < n-1; i++)
	{
		cout << a[i] << " ";
	}
	cout << a[i];
}

void reverse(int a[], int n)
{
	int i = 0;
	int mid,temp;
	mid = int(n / 2.0 + 0.5);
	for (i = 0; i < mid; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

int main()
{
	int a[100],n;
	n=in(a);
	reverse(a,n);
	out(a, n);
	return 0;
}
