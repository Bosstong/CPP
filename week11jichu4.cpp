#include <iostream>
#include <string.h>

using namespace std;

class VEHICLE
{
private:
    char Number[20], Owner[20];

public:
    VEHICLE()
    {
        strcpy(Number, "00000");
        strcpy(Owner, "unknown");
    }
    VEHICLE(char *n, char *o)
    {
        strcpy(Number, n);
        strcpy(Owner, o);
    }
    void set(char *n, char *o)
    {
        strcpy(Number, n);
        strcpy(Owner, o);
    }
    void show()
    {
        cout << "Number:" << Number << " owner:" << Owner;
    }
};

class BUS : public VEHICLE
{
private:
    int seats;

public:
    BUS() : VEHICLE() { seats = 0; };
    BUS(char *n, char *o, int s) : VEHICLE(n, o) { seats = s; }
    void set(char *n, char *o, int s)
    {
        VEHICLE::set(n, o);
        seats = s;
    }
    void show()
    {
        VEHICLE::show();
        cout << " seats:" << seats;
    }
};

int main()
{
    BUS a, b("SHAN-1234567", "ZhangSan", 40);
    char number[20], name[20];
    int seats;
    a.show();
    cout << endl;
    b.show();
    cout << endl;
    cin >> number >> name >> seats;
    a.set(number, name, seats);
    a.show();
    cout << endl;
    return 0;
}