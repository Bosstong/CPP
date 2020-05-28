#include<iostream>
using namespace std;
class MyTime
{
private:
	int hour, minute, second;
public:
	MyTime(){ hour = 0; minute = 0; second = 0; }
	MyTime(int, int, int);
	void print_12();
	void print_24();
	void set_time(int, int, int);
	MyTime add(int,int,int);
	MyTime subtract(int, int, int);
};

MyTime::MyTime(int a, int b, int c)
{
	hour = (a >= 0 && a <= 23) ? a : 0;
	minute = (b >= 0 && b <= 59) ? b : 0;
	second = (c >= 0 && c <= 59) ? c : 0;
}

void MyTime::print_12()
{
	if (hour < 12)
	{
		printf("%02d:%02d:%02d AM", hour, minute, second);	
	}
	else
	{
		printf("%02d:%02d:%02d PM", hour-12, minute, second);
	}
	cout << endl;
}

void MyTime::print_24()
{
	printf("%02d:%02d:%02d", hour, minute, second);
	cout << endl;
}

void MyTime::set_time(int a, int b, int c)
{
	hour = (a >= 0 && a <= 23) ? a : 0;
	minute = (b >= 0 && b <= 59) ? b : 0;
	second = (c >= 0 && c <= 59) ? c : 0;
}

MyTime MyTime::add(int a,int b,int c)
{
	MyTime t0=*this;
	t0.hour = hour + a;
	t0.minute = minute + b;
	t0.second = second + c;
	if (t0.second >= 60)
	{
		t0.second -= 60;
		t0.minute++;
	}
	if (t0.minute >= 60)
	{
		t0.minute -= 60;
		t0.hour++;
	}
	if (t0.hour >= 24)
	{
		t0.hour -= 24;
	}
	return t0;
}
MyTime MyTime::subtract(int a, int b, int c)
{
	MyTime t0 = *this;
	t0.hour = hour - a;
	t0.minute = minute - b;
	t0.second = second - c;
	if (t0.second < 0)
	{
		t0.second += 60;
		t0.minute--;
	}
	if (t0.minute < 0)
	{
		t0.minute += 60;
		t0.hour--;
	}
	if (t0.hour < 0)
	{
		t0.hour += 24;
	}
	return t0;
}
int main()
{
	MyTime t1, t2(8, 10, 30),t3,t4;
	t1.print_12();
	t1.print_24();
	t2.print_12();
	t2.print_24();
	int a, b, c;
	cin >> a >> b >> c;
	t1.set_time(a, b, c);
	cin >> a >> b >> c;//待加减的时间
	t3 = t1.add(a, b, c);//t1加输入时间
	t3.print_12();
	t3.print_24();
	t4 = t2.subtract(a, b, c);//t2减输入时间
	t4.print_12();
	t4.print_24();
	return 0;
}