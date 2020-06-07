#include <iostream>
#include <string.h>
using namespace std;
class Person
{
public:
	char Name[10];
	int Age;

	Person(char *name, int age)
	{ 
		strcpy(Name, name); 
		Age = age; 
		cout << "constructor of person " << Name << endl; 
	};
	~Person()
	{
		cout << "deconstructor of person " << Name << endl;
	};
	void Show()
	{
		cout << "Person " << Name << " " << Age ;
	}
};
class Student :public Person
{
	char ClassName[10];
	Person Monitor;
public:
	Student(char *name, int age,char *classname,char *name1, int age1);
	~Student(){ cout << "deconstructor of Student" << endl; };
	void Show()
	{ 
		Person::Show();
		cout << " in " << ClassName << endl;
		cout << "Monitor: ";
		Monitor.Show();
	}
};
Student::Student(char *name, int age, char *classname, char *name1, int age1):Person(name, age), Monitor(name1,age1)
{
	strcpy(ClassName, classname);
	cout << "constructor of Student" << endl;
}
int main()
{
	char name[10], name1[10], classname[10];
	int age, age1;
	cin >> name >> age >> classname >> name1 >> age1;
	Student a(name, age, classname, name1, age1);
	return 0;
}
