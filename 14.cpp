#include<iostream>
using namespace std;
int main(){
    double a;
    cin>>a;
    if(a>0){
        if(a==int(a)){
            cout<<"positive integer"<<endl;
        }else{
            cout<<"positive real"<<endl;
        }
    }
    if(a==0){
        cout<<"zero"<<endl;
    }
    if(a<0){
        if(a==int(a)){
            cout<<"negative integer"<<endl;
        }else{
            cout<<"negative real"<<endl;
        }
    }
    return 0;
}