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

int main()
{
	int a[100],n,i;
	n = in(a);
	for (i = n - 1; i > 0; i--)
	{
		cout << a[i] << " ";
	}
	cout << a[i];
	return 0;
}