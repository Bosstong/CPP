#include <iostream>
using namespace std;
int main()
{
	float a,b,c;
    int sum;
    float average;
    int z;
	cin >> a >> b >> c ;
    sum = a+b+c;
	average = (a+b+c)/3;
	z= average + 0.5 ;
	cout << sum << endl << average << endl << z <<endl;
	return 0;
}