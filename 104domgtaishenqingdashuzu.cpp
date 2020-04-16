#include<iostream>
using namespace std;
int *new_array(int n)
{
	int *a = new int[n];
	return a;
}
void init_array(int *p, int n, int c)
{
	for (int i = 0; i < n; i++)
		p[i] = c;
	return;
}
int main()
{
	int n, c,i;
	cin >> n >> c;
	int *a;
	a = new_array(n);
	init_array(a, n, c);
	for (i = 0; i < n-1; i++)
	{
		cout << a[i]<<' ';
	}
	cout << a[i];
	return 0;
}
