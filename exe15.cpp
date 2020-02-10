#include<iostream>
#include<iomanip>
using namespace std;
main(){
    int ilnput;
    cout<<"input number"<<endl;
    cin>>ilnput;
    (ilnput%3==0&&ilnput%5==0)?cout<<"yes":cout<<"no";
    cout<<endl;
}