#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a<1||a>7){
        cout<<"invalid"<<endl;
    }else{
        switch(a)
        {
            case 1:
            cout<<"monday"<<endl;
            break;
            case 2:
            cout<<"tuesday"<<endl;
            break;
            case 3:
            cout<<"wednesday"<<endl;
            break;
            case 4:
            cout<<"thursday"<<endl;
            break;
            case 5:
            cout<<"friday"<<endl;
            break;
            case 6:
            cout<<"saturday"<<endl;
            break;
            case 7:
            cout<<"sunday"<<endl;
            break;
        }
    }
    return 0;
}