#include <iostream>
using namespace std;
int max(int a[], int n)
{
    if (n == 1)
    {
        return a[0];
    }
    else if (n == 2)
    {
        return a[0] > a[1] ? a[0] : a[1];
    }
    else
    {
        int b[100], temp;
        for (int i = 1; i < n; i++)
        {
            b[i - 1] = a[i];
        }
        temp = max(b, n - 1);
        return a[0] > temp ? a[0] : temp;
    }
}

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << max(a, n);
    return 0;
}