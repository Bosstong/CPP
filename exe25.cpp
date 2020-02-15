#include<iostream>
#include<iomanip>
using namespace std;
main(){
    int i = 0;
    int j = 0;
    char a[100],b[50];
    cout<<"please input string1:"<<endl;
    cin>>a;
    cout<<"please input string2:"<<endl;
    cin>>b;
    while(a[i]!='\0')
    i++;
    while(b[j]!='\0')
    a[i++]=b[j++];
    a[i]='\0';
    cout<<a<<endl;
}