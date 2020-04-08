#include <iostream>
#include <cmath>
using namespace std;
int a, b, c, m;
int func1(int x)
{
    return a * x * x + b * x + c;
}

int func2(int x)
{
    return int(pow(x, m));
}
int avg(int (*fun)(int n), int n1, int n2)
{
    int avg = 0;
    for (int i = n1; i <= n2; i++)
        avg = avg + ((*fun)(i));
    avg = avg / (n2 - n1 + 1);
    return avg;
}

int main()
{
    cin >> a >> b >> c >> m;
    int n1, n2;
    cin >> n1 >> n2;
    int (*fun)(int);
    fun = func1;
    cout << avg(fun, n1, n2) << endl;
    fun = func2;
    cout << avg(fun, n1, n2) << endl;
    return 0;
}