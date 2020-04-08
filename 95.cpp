#include <iostream>
using namespace std;
void sort(int *a, int *b)
{
	int temp;
    if(*a>*b){
	temp = *a;
	*a = *b;
	*b = temp;}
}

void sort(int *a, int *b,int *c)
{
    sort(a,b);
    sort(a,c);
    sort(b,c);
}
int main()
{
	int a, b,c;
	cin >> a >> b >> c;
	sort(&a, &b, &c);
	cout << a << " " << b <<" " << c << endl;
	return 0;
}