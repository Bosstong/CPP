#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='A'&&a<='Z'){
        cout<<1<<endl;
    }else if(a>='a'&&a<='z'){
        cout<<0<<endl;
    }
    return 0;
}