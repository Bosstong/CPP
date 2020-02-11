#include<iostream>
#include<iomanip>
using namespace std;
main(){
    int i,j,k;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10-i;j++)
        cout<<" ";
        for(k=1;k<=2*i-1;k++)
        cout<<"*";
        cout<<endl;
    }
}