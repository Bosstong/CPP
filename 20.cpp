#include<iostream>
using namespace std;
int main(){
    int a;
    double sum;
    cin>>a;
    for(int i=1;i<=a;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}