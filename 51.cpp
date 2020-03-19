#include "iostream"
using namespace std;
int main()
{
    char a[100];
    char b[100];
    int i = 0;
    int j = 0;
    cin.getline(a, 200);
    while (a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i]=a[i];
    while (b[j] != '\0')
    {
        cout << b[j];
        j++;
    }
    return 0;
}