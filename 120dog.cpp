#include <iostream>
#include <cstring>
using namespace std;
class Dog
{
private:
    char name[20], sex;
    int age;
    double weight;

public:
    void setdata(char *a, int b, char c, double d);
    char *GetName() { return name; }
    int GetAge() { return age; }
    char GetSex() { return sex; }
    double GetWeight() { return weight; }
    void ShowInformation();
};
void Dog::setdata(char *a, int b, char c, double d)
{
    strcpy(name, a);
    age = b;
    sex = c;
    weight = d;
}
void Dog::ShowInformation()
{
    cout << "It is my dog." << endl;
    cout << "Its name is " << name << "." << endl;
    cout << "It is " << age << " years old." << endl;
    if (sex == 'm')
    {
        cout << "It is male." << endl;
    }
    else
    {
        cout << "It is female." << endl;
    }
    cout << "It is " << weight << " kg." << endl;
}

int main()
{
    Dog dog;
    char name[20];
    char  sex;
    int age;
    double weight;
    cin >> name >> age >> sex >> weight;
    dog.setdata(name, age, sex, weight);
    dog.ShowInformation();
    return 0;
}