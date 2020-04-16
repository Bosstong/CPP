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
	PERSON a[50];
    PERSON *p;
	p = a;
	cin >> p->name;
	cin >> p->gender;
	cin >> p->age;
	while ((p->name)!= "0" && (p->gender)!= "0" && (p->age)!=0)
	{
		p++;
		cin >> p->name;
		cin >> p->gender;
		cin >> p->age;
	}
	p = p - 1;
	while(p >= a)
	{
		cout << p->name << " ";
		cout << p->gender << " ";
		cout << p->age << endl;
		p--;
	}
	return 0;
}