#include <iostream>
using namespace std;
class Point
{
private:
	int x, y;  
public: 
	Point(int a= 0, int b= 0); 
	void SetPoint(int, int); 
	int GetX() { return x; }  
	int GetY() { return y; }  
	void Print();
};
Point::Point(int a, int b) 
{
	SetPoint(a, b); 
}
void Point::SetPoint(int a, int b)
{ 
	x = a; y = b;
}
void Point::Print()
{
	cout << "[" << x << "," << y << "]";
};
class Circle :public Point
{
private:
	double radius; 
public:
	Circle(int x = 0, int y = 0, double r = 0.0) :Point(x, y){ SetRadius(r); }
	void SetRadius(double r){ radius = r; }
	double GetRadius(){ return radius; }
	double Area(){ return 3.14*radius*radius; }
	void Print();
};
void Circle::Print()
{
	cout << "Circle c Center=";
	Point::Print(); 
	cout << endl << "Radius=" << radius;
}
int main()
{
	int x1, y1, x2, y2;
	double r;
	cin >> x1 >> y1 >> x2 >> y2 >> r;
	Point p(x1, y1);
	Circle c(x2,y2,r);
	cout << "Point p ";
	p.Print(); cout << endl;
	c.Print(); cout << endl;
	cout << "The centre of circle c ";
	c.Point::Print(); cout << endl;
	cout << "The area of circle c " << c.Area();
	return 0;
}
