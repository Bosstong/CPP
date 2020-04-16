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
	PERSON a;
    PERSON *p;
	p = &a;
	cin >> p->name;
	cin >> p->gender;
	cin >> p->age;
	cout << p->name << " ";
	cout << p->gender << " ";
	cout << p->age;
	return 0;
}