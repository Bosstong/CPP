#include<iostream>
#include<iomanip>
using namespace std;
main(){
    int a,b,c;
    int input;
    for(input=100;input<=999;input++)
    {
        a=input/100;
        b=(input%100)/10;
        c=input%10;
        if(a*a*a+b*b*b+c*c*c==input)
        cout<<input<<endl;
    }
}