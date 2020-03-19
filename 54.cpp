#include <iostream>
using namespace std;
int main()
{
    char a[100];
    char b[100];
    int i = 0;
    int j = 0;
    cin.getline(a, 100);
    while (a[i] != '\0')
    {
        b[i] = a[i];
        i++;
        j = i;
    }
    for (i = 0; i < j; i++)
    {
        a[i] = b[j - i - 1];
        cout << a[i];
    }
    return 0;
}