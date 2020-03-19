#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a[100];
    double b[100];
    double c[100];
    double sum = 0.0;
    int n = 0;
    cin >> n;
    int i = 0;
    int j = 0;
    int k = 0;
    int x = 0;
    double result = 0.0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    for (i = 0, j = 0, k = 0; k < n; i++, j++, k++)
    {
        c[k] = a[i] - b[j];
    }
    for (x = 0; x < n; x++)
    {
        sum += 1.0 * c[x] * c[x];
    }
    result = 1.0 * sqrt(sum);
    cout << result << endl;
    return 0;
}