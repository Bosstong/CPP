#include<iostream>
#include<string.h>
using namespace std;
class Dog
{
private:
	char name[10];
	int age;
	char sex;
	double weight;
public:
	Dog(char *, int, char, double);
	void GetName(){ cout << name; };
	void GetAge(){ cout << age; };
	void GetSex(){ cout << sex; };
	void GetWeight(){ cout << weight; };
	void speak();
};
Dog::Dog(char *name, int age, char sex, double weight)
{
	strcpy(this->name, name);
	this->age = age;
	this->sex = sex;
	this->weight = weight;
}

void Dog::speak()
{
	cout << "Arf!Arf!" << endl;
}
int main()
{
	char *name;
	name = new char;
	char sex;
	int age;
	double weight;
	cin >> name >> age >> sex >> weight;
	Dog dog1(name, age, sex, weight);
	dog1.GetName();
	cout << endl;
	dog1.GetAge();
	cout << endl;
	dog1.GetSex();
	cout << endl;
	dog1.GetWeight();
	cout << endl;
	dog1.speak();
	return 0;
}