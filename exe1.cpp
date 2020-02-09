#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int x = 123;
    double y = -3.1415;
    cout<<"x=";
    cout.width(10);
    cout<<x<<endl;


    cout<<"y=";
    cout.width(10);
    cout<<y<<endl;
    
    
    cout.setf(ios::left);
    cout<<"x=";
    cout.width(10);
    cout<<x<<endl;
   // cout.unsetf(ios::left);

    cout<<"y=";
    cout.width(10);
    cout<<y<<endl;

    cout.fill('*');
    cout.precision(4);
    cout.setf(ios::showpos);
    cout<<"x=";
    cout.width(10);
    cout<<x<<endl;


    cout<<"y=";
    cout.width(10);
    cout<<y<<endl;
}