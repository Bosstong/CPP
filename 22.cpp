#include<iostream>
using namespace std;
int main(){
    int n=1,x;
    cin>>x;
    for(;x>0;--x){
        n*=x;
    }
    cout<<n<<endl;
    return 0;
}