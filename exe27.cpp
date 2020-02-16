#include<iostream>
#include<iomanip>
using namespace std;
main(){
    struct PERSONINFO
    {
        int index;
        char name[30];
        short age;
    }*pPersonlnfo,plnfo={0,"zhangsan",20};
    pPersonlnfo=&plnfo;
    cout<<pPersonlnfo->index<<endl;
    cout<<pPersonlnfo->name<<endl;
    cout<<pPersonlnfo->age<<endl;
}