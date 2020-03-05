#include <iostream>
using namespace std;
int main()
{
	char x , y ;
	cin >> x ;
	(x>='a'&&x<='z')?y=x-32:y=x;
	cout << y ;
	return 0;
}