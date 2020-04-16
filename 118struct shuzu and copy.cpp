#include <iostream>
using namespace std;
struct PERSON
{
	char name[40];
    char gender[10];
	int age;
};
int main()
{
	int n=0;
    int x=0;
	cin >> n;
	PERSON *a=new PERSON[n];
	PERSON *p1,*p2;
	p1 = a;
	cin >> p1->name;
	cin >> p1->gender;
	cin >> p1->age;
	x++;
	while (p1->name != "0" && p1->gender != "0" && p1->age != 0)
	{
		p1++;
		x++;
		cin >> p1->name;
		cin >> p1->gender;
		cin >> p1->age;
	}
	p1 = p1 - 1;
	x = x - 1;
	PERSON *b = new PERSON[x];
	p2 = b;
	while (p1 >= a)
	{
		*p2 = *p1;
		p1--;
		p2++;
	}
	for (p2 = b; p2 < (b + x); p2++)
	{
		cout << p2->name << " " << p2->gender << " " << p2->age << endl;
	}
	delete[]a,b;
	return 0;
}