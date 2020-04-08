#include <iostream>
using namespace std;
void caesar(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = (s[i] - 'a' + 3) % 26 + 'A';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = (s[i] - 'A' + 3) % 26 + 'a';
        }
        i++;
    }
    return;
}
void oddeven(char s[])
{
    int i = 0;
    int n = 0;
    int x = 0;
    int y = 0;
    int j = 0;
    int z = 0;
    char a[100];
    char b[100];
    while (s[i] != '\0')
    {
        i++;
    }
    for (n = 0; n < i; n++)
    {
        if ((n+1) % 2 == 0)
        {
            a[x] = s[n];
            x++;
        }
        else
        {
            b[y] = s[n];
            y++;
        }
    }
    for (j = 0; j < y; j++)
    {
        s[j] = b[j];
    }
    for (z = 0; z < x; z++, j++)
    {
        s[j] = a[z];
    }
    return;
}
void cipher(void (*f)(char s[]), char s[])
{
    (*f)(s);
    return;
}
int main()
{
    char a[100];
    int n;
    cin >> a;
    cin >> n;
    void (*f)(char s[]);
    if (n == 1)
    {
        f = caesar;
    }
    if (n == 2)
    {
        f = oddeven;
    }
    cipher(f, a);
    cout << a;
    cout<<endl;
    return 0;
}