#include<iostream>
using namespace std;
int main(){
    int a;
    int n;
    cin>>a;
    a<0?n=-a:n=a;
    cout<<a;
    if(a<0){
    cout<<" "<<"-"<<hex<<n;
    }else{
        cout<<" "<<hex<<n;
    }
    if(a<0){
    cout<<" "<<"-"<<oct<<n;
    }else{
        cout<<" "<<oct<<n;
    }
    return 0;
}