#include <iostream>
using namespace std;
void sort(int &a, int &b)
{
    int temp=0;
    if (a > b)
    {
        return;
    }
    else
    {
        temp = a;
        a = b;
        b = temp;
    }
}
void sort(int &a, int &b, int &c)
{
    sort(a, b);
    sort(a, c);
    sort(b, c);
    return;
}
void sort(int &a, int &b, int &c, int &d)
{
    sort(a, b, c);
    sort(b, c, d);
    sort(a, b);
    return;
}
void sort(int data[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sort(data[i], data[j]);
        }
    }
    return;
}
void print(int data[], int n)
{
    int i;
    for (i = 0; i < n-1; i++)
    {
        cout << data[i] <<" ";
    }
    cout << data[i];
    cout<<endl;
}

int main()
{
    int a=0, b=0, c=0, d=0;
    int data[100];
    int k=0, n=0, i=0;
    cin >> k;
    switch (k)
    {
    case 1:
        cin >> a >> b;
        sort(a, b);
        cout << a <<" "<< b << endl;
        break;
    case 2:
        cin >> a >> b >> c;
        sort(a, b, c);
        cout << a <<" "<< b <<" "<< c << endl;
        break;
    case 3:
        cin >> a >> b >> c >> d;
        sort(a, b, c, d);
        cout << a <<" "<< b <<" "<< c <<" "<< d << endl;
        break;
    case 4:
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> data[i];
        }
        sort(data, n);
        print(data,n);
        break;
    }

    return 0;
}