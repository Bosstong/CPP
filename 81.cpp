#include <iostream>
using namespace std;
int sum(int a[], int n)
{
    if (n == 1)
    {
        return a[0];
    }
    else if (n == 2)
    {
        return a[0] + a[1];
    }else if(n==0){
        return 0;
    }
    else
    {
        int b[100];
        for (int i = 0; i < n - 1; i++)
        {
            b[i] = a[i];
        }
        return a[n - 1] + sum(b, n - 1);
    }
}
int main(){
    int n=0;
    int a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << sum(a, n);
	return 0;
}