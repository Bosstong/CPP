#include <iostream>
using namespace std;
int main()
{
    int amount;
    int children;
    cin >> amount;
    int x, y, z;
    if (amount <= 1)
    {
        cout << "no result!" << endl;
    }
    for (int men = 0; men <= amount / 4; men++)
        for (int women = 0; women <= amount / 3; women++)
        {
            children = amount - men - women;
            if ((4 * men + 3 * women + children / 2 == amount) && (children % 2 == 0))
            {
                x = men;
                y = women;
                z = children;
                cout << "men" << men << endl
                     << "women" << women << endl
                     << "children" << children << endl;
            }
        }
    if (x == 0 || y == 0 || z == 0)
    {
        cout << "no result!" << endl;
    }
    return 0;
}