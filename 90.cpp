#include <iostream>
using namespace std;
void add(int a, int *sum)
{
    *sum = *sum + a;
    return;
}
int main()
{
    int a[100];
    int i = 0;
    int j = 0;
    int sum = 0;
    for (i = 0; i < 100; i++)
    {
        cin >> a[i];
        if (a[i] == -1)
        {
            break;
        }
    }
    for (j = 0; j < i; j++)
    {
        add(a[j], &sum);
    }
    cout << sum << endl;
    return 0;
}