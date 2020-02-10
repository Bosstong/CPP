#include<iostream>
#include<iomanip>
using namespace std;
main(){
    int iYear;
    cout<<"please input number"<<endl;
    cin>>iYear;
    if(iYear%4==0)
    {
        if(iYear%100==0)
        {
            if(iYear%400==0)
            cout<<"it is a leap year"<<endl;
            else
                cout<<"it is not a leap year"<<endl;
        }
        else
                cout<<"it is not a leap year"<<endl;
            }
            else
                cout<<"it is not a leap year"<<endl;
}