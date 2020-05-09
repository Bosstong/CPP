#include <iostream>
using namespace std;
class Trapezium
{
private:
	int x1, y1, x2, y2, x3, y3, x4, y4;
public:
	void initial(int, int, int, int, int, int, int, int);
	void GetPosition(int&, int&, int&, int&, int&, int&, int&, int&);
	double Area();
};

void Trapezium::initial(int a, int b, int c, int d, int e, int f, int g, int h)
{
		x1 = a; y1 = b; x2 = c; y2 = d; x3 = e; y3 = f; x4 = g; y4 = h;
}

void Trapezium::GetPosition(int &a, int &b, int &c, int &d, int &e, int &f, int &g, int &h)
{
	a = x1; b = y1; c = x2; d = y2; e = x3; f = y3; g = x4; h = y4;
}

double Trapezium::Area()
{
	return ((x2 - x1) + (x4 - x3))*(y1 - y3) / 2.0;
}

int main()
{
	Trapezium x;
	int a, b, c, d, e, f, g, h;
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	x.initial(a, b, c, d, e, f, g, h);
	cout << x.Area() << endl;
	return 0;
}