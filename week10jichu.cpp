#include<iostream>
#include<cmath>

using namespace std;

class POINT
{
private:
	double x, y;
public:
	POINT(){ x = 0; y = 0; };
	POINT(double, double);
	void set(double a, double b){ x = a; y = b; };
	double distance(POINT);
	void show();
};

POINT::POINT(double a, double b)
{
	x = a; y = b;
}

double POINT::distance(POINT a)
{
	double d = 0;
	d = sqrt((x - a.x)*(x - a.x) + (y - a.y)*(y - a.y));
	return d;
}

void POINT::show()
{
	cout << '(' << x << ',' << y << ')';
}

int main()
{
	double x, y;
	cin >> x >> y;
	POINT a(x, y);
	cin >> x >> y;
	POINT b(x, y);
	a.show(); cout << endl;
	b.show(); cout << endl;
	cout << a.distance(b) << endl;
	return 0;
}