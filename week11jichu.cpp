#include <iostream>

using namespace std;

class POINT
{
private:
    double x, y;

public:
    POINT()
    {
        x = 0;
        y = 0;
    }
    POINT(double a, double b)
    {
        x = a;
        y = b;
    }
    void set(double a, double b)
    {
        x = a;
        y = b;
    };
    void show()
    {
        cout << "x=" << x << ' ' << "y=" << y;
    }
};

class CIRCLE : public POINT
{
private:
    double radius;

public:
    CIRCLE() : POINT() { radius = 0; }
    CIRCLE(double a, double b, double r) : POINT(a, b) { radius = r; }
    void set(double a, double b, double r)
    {
        POINT::set(a, b);
        radius = r;
    }
    void show()
    {
        POINT::show();
        cout << " r=" << radius;
    }
};

int main()
{
    CIRCLE a, b(1, 2, 3);
    double x, y, r;
    a.show();
    cout << endl;
    b.show();
    cout << endl;
    cin >> x >> y >> r;
    a.set(x, y, r);
    a.show();
    cout << endl;
    return 0;
}
