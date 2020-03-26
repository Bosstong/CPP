#include <iostream>

using namespace std;

int length(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char a[100];
    cin >> a;
    cout << length(a) << endl;
    return 0;
}