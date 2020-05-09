#include <iostream>
#include <cmath>
using namespace std;
class POINT
{
private:
    double x, y;

public:
    void set(double a, double b);
    void show();
    double distance(POINT B);
};
double POINT::distance(POINT b)
{
    return sqrt(pow(x - b.x, 2) + pow(y - b.y, 2));
}
void POINT::set(double a, double b)
{
    x = a;
    y = b;
}
void POINT::show()
{
    cout << "(" << x << "," << y << ")";
}

int main()
{
    POINT a, b;
    double x, y;
    cin >> x >> y;
    a.set(x, y);
    cin >> x >> y;
    b.set(x, y);
    a.show();
    cout << endl;
    b.show();
    cout << endl;
    cout << a.distance(b) << endl;
    return 0;
}