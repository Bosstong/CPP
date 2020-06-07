#include <iostream>
#include <string.h>
using namespace std;
class Person
{
	char Name[20];
	char Sex;
	int Age;
public:
	void Register(char *name, int age, char sex);
	void ShowMe();
};
void Person::Register(char *name, int age, char sex)
{
	strcpy(Name, name);
	Age = age; 
	Sex = sex;
}
void Person::ShowMe()
{
	cout << Name <<' '<< Age <<' '<< Sex;
}
class Student :public Person
{
	int Number;
	char ClassName[10];
public:
	void RegisterStu(char *classname, int number, char *name, int age, char sex);
	void ShowStu();
};
void Student::RegisterStu(char *classname, int number, char *name, int age, char sex)
{
	Register(name, age, sex);
	strcpy(ClassName, classname);
	Number = number;
}
void Student::ShowStu()
{
	cout << Number << ' ' << ClassName << ' ';
	ShowMe();
}
int main()
{
	char *classname;
	classname = new char[10];
	int number;
	char *name;
	name = new char[10];
	int age;
	char sex;
	cin >> classname >> number >> name >> age >> sex;
	Student a;
	a.RegisterStu(classname, number, name, age, sex);
	a.ShowStu(); cout << endl;
	a.ShowMe();
	return 0;
}