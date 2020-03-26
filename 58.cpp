#include <iostream>
#include <cstring>
using namespace std;
int isprime(int a)
{
    int s = 1;
    if (a == 1)
    {
        s = 0;
    }
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            s = 0;
            break;
        }
    }
    if (s == 1)
    {
        return 1;
    }
    else if (s == 0)
    {
        return 0;
    }
}
int main()
{
    int a[100];
    int s = 0;
    for (int i = 0;; i++, s++)
    {
        cin >> a[i];
        if (a[i] == 0)
            break;
    }
    int c[s];
    for (int i = 0; i < s; i++)
    {
        if (isprime(a[i]) == 1)
        {
            c[i] = 1;
        }
    }
    int num = 0;
    for (int i = 0; i < s; i++)
    {
        if (c[i] == 1)
            num = i;
    }
    for (int i = 0; i < s; i++)
    {
        if (c[i] == 1)
        {
            cout << a[i];
            if (i != num)
            {
                cout << " ";
            }
        }
    }
}