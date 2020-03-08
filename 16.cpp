#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='0'&&a<='9'){
        cout<<0<<endl;
    }else if(a>='A'&&a<='Z'){
        cout<<1<<endl;
    }else if(a>='a'&&a<='z'){
        cout<<2<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}