#include <iostream>
#include <string.h>
using namespace std;
class Person
{
private:
	char Name[10];
	char Sex;
	int Age;
public:
	Person(){};
	Person(char *name, char sex, int age){ Register(name, age, sex); 
	}
	void Register(char *name, int age, char sex);
	void ShowMe();
};
void Person::Register(char *name, int age, char sex)
{
	strcpy(Name, name);
	Sex=sex;
	Age = age;
}
void Person::ShowMe()
{
	char sex[3];
	if (Sex == 'm')
		strcpy(sex, "男");
	else
		strcpy(sex, "女");
	cout << "姓名 " << Name << endl;
	cout << "性别 " << sex << endl;
	cout << "年龄 " << Age << endl;
}

class Teacher :virtual public Person
{
private:
	char Dept[20];
	int Salary;
public:
	Teacher(char *name, int age, char sex, char *dept, int salary) :Person(name, sex, age)
	{
		strcpy(Dept, dept);
		Salary = salary;
	}
	void Show()
	{
		cout << "工作单位 " << Dept << endl;
		cout << "月薪 " << Salary << endl;
	}
};

class Student :virtual public Person
{
private:
	char ID[12];
	char Class[12];
public:
	Student(){};
	Student(char *name, int age, char sex, char *id, char *classroom) :Person(name, sex, age)
	{
		strcpy(ID, id);
		strcpy(Class, classroom);
	}
	void Show()
	{
		cout << "班级 " << Class << endl;
		cout << "学号 " << ID << endl;
	}
};
class Graduate :public Teacher,public Student
{
public:
	Graduate(char *name, int age, char sex, char *dept, int salary, char *id, char *classroom) 
	:Person(name,sex,age),Teacher(name, age, sex, dept, salary),Student(name,age,sex,id,classroom){}
	void ShowMe()
	{
		Student::Show();
		Person::ShowMe();
		Teacher::Show();
	}
};

int main()
{
	char name[10], sex, dept[20], id[12], classroom[12];
	int age, salary;
	cin >> name >> age >> sex >> dept >> salary >> id >> classroom;
	Graduate a(name, age, sex, dept, salary, id, classroom);
	a.ShowMe();
	return 0;
}