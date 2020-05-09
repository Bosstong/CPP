#include <iostream>
#include <cstring>
using namespace std;
class Person
{
private:
	char name[20];
	int age;
	char sex;
public:
	void Register(char *a,int b,char c);
	void ShowMe();
};
void Person::Register(char *a, int b, char c)
{
	strcpy(name, a);
	age = b;
	sex = c;
}

void Person::ShowMe()
{
	cout << name << " " << age << " " << sex << endl;
}

int main()
{
	Person person1, person2;
	char name[20], sex;
	int age;
	cin >> name >> age >> sex;
	person1.Register(name, age, sex);
	person2.Register("Zhang3", 19, 'm');
	person1.ShowMe();
	person2.ShowMe();
	return 0;
}