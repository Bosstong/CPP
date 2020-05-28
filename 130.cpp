#include<iostream>
#include<string.h>
using namespace std;
class Person
{
private:
	char name[20];
	int age;
	char sex;
public:
	Person()
	{
		strcpy(name, "XXX");
		age = 0;
		sex = 'm';
	};
	void Register(char[],int,char);
	void showme();
	~Person()
	{		
		cout << "Now destroying the instance of Person" << endl;
	}
};
void Person::Register(char *a,int n,char s)
{
	strcpy(name, a);
	age = n;
	sex = s;
}
void Person::showme()
{
	cout << name << " " << age << " " << sex << endl;
}

int main()
{
	Person *p1, *p2;
	p1 = new Person;
	p2 = new Person;
	cout << "person1:";
	p1->showme();
	cout << "person2:";
	p2->showme();
	char a[20], s;
	int n;
	cin >> a >> n >> s;
	p1->Register(a, n, s);
	*p2 = *p1;
	cout << "person1:";
	p1->showme();
	cout << "person2:";
	p2->showme();
	delete p1;
	delete p2;
	return 0;
}