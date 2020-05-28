#include<iostream>
#include<cmath>
using namespace std;

class FRACTION {
	int x, y;
public:
	void set(int a, int b) {
		x = a, y = b;
		reduce();
		if (y < 0 && x) {
			y = 0-y;
			x = 0-x;
		}
	}
	void reduce(){
		if (x&&y) {
			int i;
			if (abs(x) < abs(y))i =abs (x);
			else i =abs( y);
			for (;i >= 2;--i) {
				if (x%i == 0 && y%i == 0) {
					x /= i;y /= i;
				}
			}
		}
	}
	void show() {
		if (y < 0)cout << "-";
		cout << x;
		cout << "/";
		if (y < 0)cout << -y;
		else cout << y;
	}
	double real() {
		double a = 1.0*x / y;
		if (fabs(a) < 0.0000001)return 0;
		return a;
	}
};
int  main() {
		FRACTION a;
		int x, y;
		cin >> x >> y;
		a.set(x, y);
		a.show();
		cout << endl;
		cout<<a.real();cout << endl;
		return 0;
	}