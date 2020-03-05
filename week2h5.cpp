#include <iostream>
using namespace std;
int main()
{
	char x , d ;
	cin >> x ;
	(x>='a'&&x<='z')?d=x-32:d=x;
	cout << d ;
	return 0;
}