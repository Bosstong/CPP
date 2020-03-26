#include <iostream>
using namespace std;
int in(int a[])
{
    int i = 0, n;
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

int sum(int a[], int n)
{
    int i = 0;
    int sum = 0;
    for (i = 0; i < n; i++)
        sum = sum + a[i];
    return sum;
}

int main()
{
    int a[100], i;
    i = in(a);
    cout << sum(a, i);
    return 0;
}