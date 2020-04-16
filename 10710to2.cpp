#include <iostream>
using namespace std;
bool judge(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 255 || a[i] < 0)
        {
            return false;
        }
    }
    return true;
}

void trans(int &n)
{
    int a = 1, sum = 0;
    while (n)
    {
        sum += a * (n % 2);
        a *= 10;
        n /= 2;
    }
    n = sum;
}

int main()
{
    int a[4];
    scanf("%d.%d.%d.%d", &a[0], &a[1], &a[2], &a[3]);
    if (!judge(a, 4))
    {
        cout<<"data error"<<endl;
        return 0;
    }
    for (int i = 0; i < 4; i++)
    {
        trans(a[i]);
        printf("%08d", a[i]);
    }
    cout << endl;
    return 0;
}