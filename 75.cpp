#include <iostream>
#include <string>
using namespace std;
void print_spaced(char a[])
{
    int n = 0;
    int i;
    while (a[n] != '\0')
    {
        n++;
    }
    for (i = 0; i < n - 1; i++)
    {
        cout << a[i] << ' ';
    }
    cout << a[i];
}

void print_spaced(string a)
{
    int n = 0;
    int i;
    while (a[n] != '\0')
    {
        n++;
    }
    for (i = 0; i < n - 1; i++)
    {
        cout << a[i] << ' ';
    }
    cout << a[i];
}

int main()
{
    char a[100];
    string b;
    cin >> a;
    cin >> b;
    print_spaced(a);
    cout << endl;
    print_spaced(b);
    return 0;
}