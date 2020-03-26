#include <iostream>
using namespace std;
void big(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i]-32;
        }
        else if ((a[i] >= 'A' && a[i] <= 'Z') || a[i] == ' ')
        {
            a[i] = a[i];
        }
        else
        {
            int j = i;
            while (1)
            {
                a[j] = a[j + 1];
                j++;
                if (a[j] == '\0')
                    break;
            }
            i--;
        }
        i++;
    }
}

int main()
{
    char a[200];
    cin.getline(a, 200);
    big(a);
    cout<<a<<endl;;
    return 0;
}