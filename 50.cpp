#include <iostream>
using namespace std;
int main()
{
    char a;
    int sum = 0;
    while ((a = getchar()) != '\n')
    {
        if (a >= 'A' && a <= 'Z')
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}