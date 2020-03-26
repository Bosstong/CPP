#include <iostream>
using namespace std;
int c(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int a = 1, i = 1;
    while (n != 0)
    {
        a = a * i;
        i++;
        n--;
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    cout << c(n) << endl;
    return 0;
}