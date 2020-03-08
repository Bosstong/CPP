#include<iostream>
using namespace std;
int main(){
    unsigned int x;
    int i=0;
    cin>>x;
    int a =x;
    if(x==0){
        cout<<1<<endl;
    }
    if(x!=0){
    while(a!=0){
        i++;
        a=a/10;
    }
    cout<<i<<endl;
    }
    return 0;
}