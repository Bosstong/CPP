#include<iostream>
#include<iomanip>
using namespace std;
main(){
    char ilnput;
    cin>>ilnput;
    switch(ilnput)
    {
        case'A':
        cout<<"very good"<<endl;
        break;
        case'B':
        cout<<"good"<<endl;
        break;
        case'C':
        cout<<"normal"<<endl;
        break;
        case'D':
        cout<<"failure"<<endl;
        break;
        default:
        cout<<"input error"<<endl;
    }
}