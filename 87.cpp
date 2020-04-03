#include <iostream>
using namespace std;
int input(int a[])
{
    int i = 0;
    int x = 0;
    while (1)
    {
        cin >> x;
        if (x != -9999)
        {
            a[i] = x;
            i++;
        }
        else
            return i;
    }
}

int input(double a[])
{
    int i = 0;
    double x = 0.0;
    while (1)
    {
        cin >> x;
        if (x != -9999)
        {
            a[i] = x;
            i++;
        }
        else
            return i;
    }
}

int mysum(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return a[0];
    }
    else
    {
        int b[100];
        for (int i = 0; i < n-1; i++)
        {
            b[i] = a[i];
        }
        return a[n-1] + mysum(b, n - 1);
    }
}
double mysum (double a[], int n)
{
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return a[0];
        }
        else
        {
            double b[100];
            for (int i = 0; i < n - 1; i++)
            {
                b[i] = a[i];
            }
            return a[n - 1] + mysum(b, n - 1);
        }
}
int main()
{
        int c[100];
        double d[100];
        int sum1=0;
        double sum2;
        int x = 0;
        int y = 0;
        x = input(c);
        y = input(d);
        sum1 = mysum(c, x);
        sum2 = mysum(d, y);
        cout << sum1 << " " << sum2 << endl;
        return 0;
}