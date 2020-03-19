#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int i = 0;
    double a[100];
    double sum=0;
    double x;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        sum += a[j] * a[j];
    }
    x = sqrt(sum);
    cout << x << endl;
    return 0;
}