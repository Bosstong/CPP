#include <iostream>
using namespace std;
class Weekday
{
private:
	int daynumber;
public:
	void SetDay(int);
	void IncDay();
	void NowDay();
};

void Weekday::SetDay(int n)
{
	daynumber = (n >= 0 && n < 7) ? n:0;
}

void Weekday::IncDay()
{
	daynumber = (daynumber + 1 < 7) ? daynumber + 1 : daynumber + 1 - 7;
}
void Weekday::NowDay()
{
	switch (daynumber)
	{
	case 0:
		cout << "星期日" << endl; return;
	case 1:
		cout << "星期一" << endl; return;
	case 2:
		cout << "星期二" << endl; return;
	case 3:
		cout << "星期三" << endl; return;
	case 4:
		cout << "星期四" << endl; return;
	case 5:
		cout << "星期五" << endl; return;
	case 6:
		cout << "星期六" << endl; return;
	}
}

int main()
{
	Weekday x;
	int n;
	cin >> n;
	x.SetDay(n);
	x.NowDay();
	x.IncDay();
	x.NowDay();
	x.IncDay();
	x.NowDay();
	return 0;
}