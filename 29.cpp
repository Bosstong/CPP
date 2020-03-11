#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>'a'&&a<'z'){
        cout.put(a-1).put(a).put(a+1)<<endl;
    }
    if(a>'A'&&a<'Z'){
        cout.put(a-1).put(a).put(a+1)<<endl;
    }
    if(a=='a'){
        cout<<"z"<<a<<"b"<<endl;
    }
    if(a=='z'){
        cout<<"y"<<a<<"a"<<endl;
    }
    if(a=='A'){
        cout<<"Z"<<a<<"B"<<endl;
    }
    if(a=='Z'){
        cout<<"Y"<<a<<"A"<<endl;
    }
    return 0;
}
