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

int main()
{
	int a[100],n;
	n=in(a);
	out(a, n);
	return 0;
}