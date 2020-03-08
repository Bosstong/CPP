#include<iostream>
using namespace std;
int main(){
    unsigned int a;
    cin>>a;
    switch(a/10){
        case 10:
        cout<<5<<endl;
        break;
        case 9:
        cout<<5<<endl;
        break;
        case 8:
        cout<<4<<endl;
        break;
        case 7:
        cout<<3<<endl;
        break;
        case 6:
        cout<<2<<endl;
        break;
        case 0:
        cout<<0<<endl;
        break;
        default:
        cout<<1<<endl;
        break;
    }
    return 0;
}