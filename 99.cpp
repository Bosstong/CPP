#include <iostream>
#include <cmath>
using namespace std;
double myexp(double x)
{
    return exp(x);
}

double mysin(double x)
{
    return sin(x);
}

double mycos(double x)
{
    return cos(x);
}

double funavg(double (*f)(double), double a, double b, int n)
{
    double avg = 0;
    double h;
    h = (b - a) / n;
    for (int i = 0; i <= n; i++)
    {
        avg = avg + (*f)(a + i * h);
    }
    return (avg / (n + 1));
}
int main()
{
    double a, b;
    cin >> a >> b;
    cout << funavg(myexp, a, b, 1000) << " " << funavg(mysin, a, b, 1000) << " " << funavg(mycos, a, b, 1000) << endl;
    return 0;
}