#include <iostream>
#include <cmath>

using namespace std;

class CIRCLE
{
private:
    double center_x, center_y, r;

public:
    CIRCLE()
    {
        center_x = 0;
        center_y = 0;
        r = 0;
    }
    CIRCLE(double a, double b, double c)
    {
        center_x = a;
        center_y = b;
        r = c;
    }
    void set(double a, double b, double c)
    {
        center_x = a;
        center_y = b;
        r = c;
    }
    double area() { return 3.14 * r * r; }
    double perimeter() { return 3.14 * 2 * r; }
    void show() { cout << '(' << center_x << ',' << center_y << ',' << r << ')'; }
};

int main()
{
    CIRCLE a;
    double x, y, r;
    cin >> x >> y >> r;
    CIRCLE b(x, y, r);
    a.show();
    cout << endl;
    cout << a.perimeter() << endl;
    cout << a.area() << endl;
    b.show();
    cout << endl;
    cout << b.perimeter() << endl;
    cout << b.area() << endl;
    return 0;
}