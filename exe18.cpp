#include<iostream>
#include<iomanip>
using namespace std;
main(){
    int ivar=0;
    int num=0;
    label:
    ivar++;
    num+=ivar;
    if(ivar<100)
    {
        goto label;
    }
    cout<<num<<endl;
}