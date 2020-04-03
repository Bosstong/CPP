#include<iostream>
using namespace std;
inline int s(int a, int b)
{
	return a*b;
}

inline int c(int a, int b)
{
	return 2*(a+b);
}

int main()
{
	int x;
    int y;
	cin >> x >> y;
	cout << s(x, y) << ' ';
	cout << c(x, y) << endl;
	return 0;
}