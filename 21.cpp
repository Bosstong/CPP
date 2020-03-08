#include<iostream>
using namespace std;
int main(){
    int x;
    double sum=0;
    cin>>x;
    for(;x>0;x--){
        sum+=1.0/x;
    }
    cout<<sum<<endl;
}