#include <iostream>
#include <cmath>
using namespace std;
class CIRCLE
{
private:
    double x, y, r;

public:
    void set(double a, double b, double c)
    {
        x = a;
        y = b, r = c;
    }
    void show()
    {
        cout << "(" << x << "," << y << "," << r << ")";
    }
    double perimeter()
    {
        return 2 * r * 3.14;
    }
    double area()
    {
        return r * r * 3.14;
    }
};
int main()
{
    CIRCLE a;
    double x, y, r;
    cin >> x >> y >> r;
    a.set(x, y, r);
    a.show();
    cout << endl;
    cout << a.perimeter() << endl;
    cout << a.area() << endl;
    return 0;
}