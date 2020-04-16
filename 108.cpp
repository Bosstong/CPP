#include <iostream>
using namespace std;
int main()
{
	int a[20];
    int *p;
    int temp;
    int n=0;
	for (p = a; p < a + 20; p++)
	{
		cin >> temp;
		if (temp == 9999)break;
		*p = temp;
		n++;
	}
	for (p = a; p < a + n-1;p++)
	{
		cout << *p << " ";
	}
	cout << *p;
	return 0;
}