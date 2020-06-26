#include <iostream>

using namespace std;

class VECTOR
{
private:
    int *p, n;

public:
    VECTOR();
    VECTOR(int);
    ~VECTOR() { delete[] p; };
    void show();
};

VECTOR::VECTOR()
{
    n = 10;
    p = new int[10];
    for (int i = 0; i < 10; i++)
        p[i] = 0;
}

VECTOR::VECTOR(int m)
{
    n = m;
    p = new int[n];
    for (int i = 0; i < n; i++)
        p[i] = 0;
}

void VECTOR::show()
{
    int i = 0;
    for (i = 0; i < n - 1; i++)
        cout << p[i] << " ";
    cout << p[i];
}

int main()
{
    VECTOR a, b(5);
    a.show();
    cout << endl;
    b.show();
    cout << endl;
    return 0;
}