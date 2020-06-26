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

class RECT : public POINT
{
private:
    double width, height;

public:
    RECT() : POINT()
    {
        width = 0;
        height = 0;
    }
    RECT(double a, double b, double c, double d) : POINT(a, b)
    {
        width = c;
        height = d;
    }
    void set(double a, double b, double c, double d)
    {
        POINT::set(a, b);
        width = c;
        height = d;
    }
    void show()
    {
        POINT::show();
        cout << " width=" << width << " height=" << height;
    }
};

int main()
{
    RECT a, b(1, 2, 10, 5);
    double x, y, w, h;
    a.show();
    cout << endl;
    b.show();
    cout << endl;
    cin >> x >> y >> w >> h;
    a.set(x, y, w, h);
    a.show();
    cout << endl;
    return 0;
}
