#include <iostream>
#include <string.h>
using namespace std;
class Person
{
protected:
	char Name[10];
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
	char sex[3];
	if (Sex == 'm') 
		strcpy(sex,"男");
	else  
		strcpy(sex,"女"); 
	cout << "姓名 " << Name << endl;
	cout << "性别 " << sex << endl;
	cout <<"年龄 "  << Age << endl;
}
class Teacher:public Person
{
private:
	char Dept[20];
	int Salary;
public:
	Teacher(){ Register(" ", 0, ' '); };
	Teacher(char *dept, int salary,char *name, int age, char sex);
	void ShowMe();
};
Teacher::Teacher(char *dept, int salary, char *name, int age, char sex)
{
	Register(name, age, sex);
	strcpy(Dept, dept);
	Salary = salary;
}
void Teacher::ShowMe()
{
	Person::ShowMe();
	cout << "工作单位 " << Dept << endl;
	cout << "月薪 " << Salary << endl;
}
class Student :public Person
{
	char ID[12];
	char Class[12];
public:
	Student(char *id, char *classroom, char *name, int age, char sex);
	void ShowMe();
};
Student::Student(char *id, char *classroom, char *name, int age, char sex)
{
	Register(name, age, sex);
	strcpy(ID, id);
	strcpy(Class, classroom);
}
void Student::ShowMe()
{
	cout << "学号 " << ID << endl;
	Person::ShowMe();	
	cout << "班级 " << Class << endl;
}
int main()
{
	char id[10];
	char classroom[12];
	char name[10];
	int age;
	char sex;
	char dept[20];
	int salary;
	cin >> name >> age >> sex >> dept>>salary;
	Teacher a(dept, salary, name, age, sex);
	cin >> name >> age >> sex >> id >> classroom;
	Student b(id,classroom,name,age,sex);
	a.ShowMe();
	b.ShowMe();
	return 0;
}