#include<iostream>
using namespace std;
class Ellipse
{
private:
	int center_x, center_y;
	double R, r;
public:
	Ellipse(int, int, double, double);
	double Area(){ return 3.14 * R * r; }
};

Ellipse::Ellipse(int cx, int cy, double ja, double ia)
{
	center_x = cx; center_y = cy; R = ja; r = ia;
}

int main()
{
	int a, b;
	double c, d;
	cin >> a >> b >> c >> d;
	Ellipse e(a, b, c, d);
	cout << e.Area() << endl;
	return 0;
}