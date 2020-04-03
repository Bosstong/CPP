#include<iostream>
using namespace std;
int monkeyandPeak(int k, int n)
{
	if (n == 1)return k;
 	if (n == 2)return (k + 1) * 2;
	int sum;
	sum = (monkeyandPeak(k, n - 1) + 1) * 2;
	return sum;
}

int main()
{
	int n;
	cin >> n;
	cout << monkeyandPeak(1, n);
	return 0;
}