#include<iostream>
#include<string>
using namespace std;
int main(){
    char a[5]={'a','b','c','d','e'};
    string b,c;
    int temp;
    int length;
    int d;
    cin>>b;
    cin>>temp;
    length=b.length();
    if(length%temp==0){
        d=length/temp;
    }else{
        d=length/temp+1;
    }
    for(int i=0;i<d;i++){
        c=c+(b.substr(i*temp,temp)+a[i%5]);
    }
    cout<<c<<endl;
    return 0;
}