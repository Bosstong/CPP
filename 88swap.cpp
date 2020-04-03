#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap(double &a, double &b)
{
	double temp;
	temp = a;
	a = b;
	b = temp;
}

void swap(int a[], int &n, int b[], int &m)
{
	int max = n >= m ? n : m;
	for (int i = 0; i < max; i++)
		swap(a[i], b[i]);
	swap(n, m);
}


void swap(char a[], char b[])
{
	int i = 0,n;
	char temp;
	while (a[i] != '\0'&&b[i] != '\0')
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
		i++;
	}
	n = i;
	if (a[i] == '\0')
	{
		while (b[i]!= '\0')
		{
			a[i] = b[i];
			i++;
		}
		a[i] = '\0';
		b[n] = '\0';
	}
	else
	{
		while (a[i] != '\0')
		{
			b[i] = a[i];
			i++;
		}
		b[i] = '\0';
		a[n] = '\0';
	}
}

void print(int a[], int n)
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
	int a, b;
	double da, db;
	int aa[100], ab[100];
	char s1[100], s2[100];
	int n, m;
	int i;
	cin >> a >> b;
	cin >> da >> db;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> aa[i];
	}
	cin >> m;
	for (i = 0; i < m; i++)
	{
		cin >> ab[i];
	}
	cin >> s1 >> s2;
	swap(a, b);
	swap(da, db);
	swap(aa, n, ab, m);
	swap(s1, s2);
	cout << a << " " << b << endl;
	cout << da << " " << db << endl;
	print(aa, n);
	print(ab, m);
	cout << s1 << " " << s2 << endl;
	return 0;
}