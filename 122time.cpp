#include <iostream>
#include <iomanip>
using namespace std;
class MyTime
{
private:
    int hour, minute, second;

public:
    void SetTime(int, int, int);
    void print12h();
    void print24h();
};
void MyTime::SetTime(int a, int b, int c)
{
    hour = (a >= 0 && a < 24) ? a : 0;
    minute = (b >= 0 && b < 60) ? b : 0;
    second = (c >= 0 && c < 60) ? c : 0;
}
void MyTime::print12h()
{
    if (hour < 12)
        printf("%02d:%02d:%02d AM\n", hour, minute, second);
    else
        printf("%02d:%02d:%02d PM\n", hour - 12, minute, second);
}
void MyTime::print24h()
{
    printf("%02d:%02d:%02d\n", hour, minute, second);
}
int main()
{
    MyTime time;
    int a, b, c;
    cin >> a >> b >> c;
    time.SetTime(a, b, c);
    time.print12h();
    time.print24h();
    return 0;
}