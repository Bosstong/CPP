#include <iostream>
#include <string.h>

using namespace std;

class ROOM
{
private:
    char RoomId[20];

public:
    ROOM() { strcpy(RoomId, "0000"); }
    ROOM(char *id) { strcpy(RoomId, id); }
    void set(char *id) { strcpy(RoomId, id); }
    void show()
    {
        cout << "Number:" << RoomId;
    }
};

class CLASSROOM : public ROOM
{
private:
    int seats;

public:
    CLASSROOM() : ROOM() { seats = 0; }
    CLASSROOM(char *id, int s) : ROOM(id) { seats = s; }
    void set(char *id, int s)
    {
        ROOM::set(id);
        seats = s;
    }
    void show()
    {
        ROOM::show();
        cout << " seats:" << seats;
    }
};

int main()
{
    CLASSROOM a, b("工程馆505", 130);
    char number[20];
    int seats;
    a.show();
    cout << endl;
    b.show();
    cout << endl;
    cin >> number >> seats;
    a.set(number, seats);
    a.show();
    cout << endl;
    return 0;
}