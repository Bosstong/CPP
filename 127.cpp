#include <iostream>
#include <cmath>
using namespace std;
class COMPLEX
{
    double x, y;

public:
    void set(double a, double b)
    {
        x = a, y = b;
    }
    double getReal()
    {
        return x;
    }
    double getLmag()
    {
        return y;
    }
    double module()
    {
        return sqrt(x * x + y * y);
    }
    COMPLEX add(COMPLEX b)
    {
        COMPLEX c;
        c.x = x + b.x;
        c.y = y + b.y;
        return c;
    }
    void show()
    {
        cout << x;
        if (y >= 0)
            cout << "+";
        cout << y << "j";
    }
};
int main()
{
    COMPLEX a, b, c;
    double x, y;
    cin >> x >> y;
    a.set(x, y);
    cin >> x >> y;
    b.set(x, y);
    c = a.add(b);
    c.show();
    cout << endl;
    cout << c.getReal();
    cout << endl;
    cout << c.getLmag() << endl;
    cout << c.module() << endl;
    return 0;
}