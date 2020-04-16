#include <iostream>
using namespace std;
int main()
{
	int *a = new int;
	int *b = new int;
	int *c = new int;
	cin >> *a >> *b >> *c;
	cout << *a + *b + *c << endl;
	delete a, b, c;
	return 0;
}