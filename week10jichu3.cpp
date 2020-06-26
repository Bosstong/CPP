#include <iostream>
#include <cmath>

using namespace std;

class RECT
{
private:
    int x1, y1, x2, y2;

public:
    RECT() : x1(0), y1(0), x2(0), y2(0){};
    RECT(int a, int b, int c, int d)
    {
        x1 = a;
        y1 = b;
        x2 = c;
        y2 = d;
    };
    RECT(RECT &a) : x1(a.x1), y1(a.y1), x2(a.x2), y2(a.y2){}; //拷贝构造函数
    void set(int a, int b, int c, int d)
    {
        x1 = a;
        y1 = b;
        x2 = c;
        y2 = d;
    };
    int area() { return abs((x2 - x1) * (y2 - y1)); };
    int perimeter() { return 2 * (abs(x2 - x1) + abs(y2 - y1)); };
    void showinfo() { cout << '(' << x1 << ',' << y1 << ',' << x2 << ',' << y2 << ')'; };
    void show();
    ~RECT();
};

RECT::~RECT()
{
    cout << '(' << x1 << ',' << y1 << ',' << x2 << ',' << y2 << ")deconstruct" << endl;
}

void RECT::show()
{
    for (int i = 0; i < abs(y2 - y1); i++)
    {
        for (int j = 0; j < abs(x2 - x1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    RECT a;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    a.set(x1, y1, x2, y2);
    a.showinfo();
    cout << endl;
    cout << a.perimeter() << endl;
    cout << a.area() << endl;
    a.show();
    RECT b(x1 + 2, y1, x2 + 2, y2);
    RECT c(b);
    c.showinfo();
    cout << endl;
    cout << c.perimeter() << endl;
    cout << c.area() << endl;
    c.show();
    return 0;
}