#include<iostream>
using namespace std;
class Data
{
private:
	int year, month, day;
public:
	Data() :year(1900), month(1), day(1){};
	Data(int y, int m, int d);	
	void print()
	{
		cout << year << "-" <<month << "-" <<day;
	}
	void init(int y, int m, int d)
	{
		year = y; month = m; day = d;
	}
};
Data::Data(int y, int m, int d) :year(1900), month(1), day(1)
{
	if (y >= 1900 && y < 9999)
		year = y;
	else return;
	if (m >= 1 && m <= 12)
		month = m;
	else
	{
		year = 1900; return;
	}
	if (d >= 1 && d <= 31)
		day = d;
	else
	{
		year = 1900; month = 1; return;
	}
}
int main()
{
	Data d1, d2(2100, 12, 12);
	d1.print();
	cout << endl;
	d2.print();
	cout << endl;
	int a, b, c;
	cin >> a >> b >> c;
	d1.init(a, b, c);
	d1.print();
	cout << endl;
	return 0;
}