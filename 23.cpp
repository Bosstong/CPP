#include<iostream>
using namespace std;
int main(){
    int x;
    int i =1;
    cin>>x;
    cout<<i;
    while(--x){
        i=-1*(i);
        cout<<" "<<i;
    }
    cout<<endl;
    return 0;
}