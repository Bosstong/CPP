#include<iostream>
using namespace std;
int main(){
    int a;
    int i;
    int j;
    cin>>a;
    if(a<0){
        a=0;
    }
    if(a>9){
        a=9;
    }
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
        cout<<i<<"*"<<j<<"="<<i*j;
        if(i!=j){
            cout<<" ";
        }else{
        cout<<endl;
        }
        }
    }
    return 0;
}