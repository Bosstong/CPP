#include <iostream>
using namespace std;
int sumDiagonal(int **a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << sumDiagonal(a, n);
    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}