#include<iostream>
#include<cmath>
using namespace std;
struct point
{
	double x, y;
}a,b;

int main()
{
	double d;
	cin >> a.x >> a.y;
	cin >> b.x >> b.y;
	d = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
	cout << d<<endl;
	return 0;
}