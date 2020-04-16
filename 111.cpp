#include <iostream>
using namespace std;
char trans(char s)
{
    if (s >= 'A' && s <= 'Z')
    {
        return s - ('A' - 'a');
    }
    else
    {
        return s;
    }
}
int mystrcmp(char *s1, char *s2)
{
    while (1)
    {
        if (*s1 == '\0' && *s2 == '\0')
        {
            return 0;
        }
        else if (trans(*s1) > trans(*s2))
        {
            return 1;
        }
        else if (trans(*s1) < trans(*s2))
        {
            return -1;
        }
        else
        {
            s1++;
            s2++;
        }
    }
}
int main()
{
    char s1[200];
    char s2[200];
    cin >> s1 >> s2;
    cout << mystrcmp(s1, s2) << endl;
    return 0;
}