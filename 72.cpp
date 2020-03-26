#include <iostream>
using namespace std;
int compare(char a[], char b[])
{
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] > b[i])
        {
            return 1;
        }
        else if (a[i] < b[i])
        {
            return -1;
        }
    }
    if (a[i] == '\0' && b[i] != '\0')
    {
        return -1;
    }
    else if (a[i] == '\0' && b[i] == '\0')
    {
        return 0;
    }
    else
    {
        return 1;
    }
    return 0;
}
int main()
{
    char a[200];
    char b[200];
    int n;
    cin >> a >> b;
    n = compare(a, b);
    cout << n << endl;
}