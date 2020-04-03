#include <iostream>
using namespace std;
void reverse(char s[], int i, int j)
{
    int a;
    int b;
    b = j - (i + 1);
    if (i < b)
    {
        a = s[i];
        s[i] = s[b];
        s[b] = a;
        reverse(s, ++i, j);
    }
}
int main()
{
    char t[100];
    int i = 0;
    int k = 0;
    cin >> k;
    for (int j = 0; j < k; j++)
    {
        cin >> t[j];
    }
    reverse(t, 0, k);
    for (i = 0; i < k - 1; i++)
    {
        cout << t[i] << ' ';
    }
    cout<<t[k-1];
    cout << endl;
}