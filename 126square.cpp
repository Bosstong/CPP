#include <iostream>
#include <cmath>
using namespace std;
class RECT
{
private:
    struct point
    {
        int x, y;
    };
    point p1, p2;

public:
    void set(int a, int b, int c, int d)
    {
        p1.x = a;
        p1.y = b, p2.x = c, p2.y = d;
    }
    void showinfo()
    {
        cout << "(" << p1.x << "," << p1.y << "," << p2.x << "," << p2.y << ")";
    }
    int perimeter()
    {
        return 2 * (abs(p2.x - p1.x) + abs(p2.y - p1.y));
    }
    int area()
    {
        return abs((p1.x - p2.x) * (p1.y - p2.y));
    }
    void show()
    {
        for (int i = abs(p2.y - p1.y); i > 0; --i)
        {
            for (int j = abs(p2.x - p1.x); j > 0; --j)
                cout << "*";
            cout << endl;
        }
    }
};
int main()
{
    RECT a;
    int x, y, r, s;
    cin >> x >> y >> r >> s;
    a.set(x, y, r, s);
    a.showinfo();
    cout << endl;
    cout << a.perimeter() << endl;
    cout << a.area() << endl;
    a.show();
    return 0;
}