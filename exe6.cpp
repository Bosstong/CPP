#include<iostream>
#include<iomanip>
using namespace std;
main(){
    int i =5,j=8,k=12,l=4,x1,x2;
    x1=i>j&&k>l;
    x2=!(i>j)&&k>l;
    cout<<x1<<endl;
    cout<<x2<<endl;
}