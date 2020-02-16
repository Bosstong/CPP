#include<iostream>
#include<iomanip>
using namespace std;
main(){
    /*struct Personinfo
    {
        int index;
        char name[30];
        short age;
    }person[5]=^^^^^;*/

    /*struct 
    {
        int index;
        char name[30];
        short age;
    }Person[5]=^^^^*/

    struct Personinfo
    {
       int index;
       char name[30];
       short age;
    }plnfo;
    Personinfo person[5]={{1,"zhangsan",20},{2,"likeke",21},{3,"songqiao",22},{4,"yuanyuan",23},{5,"wangbingbing",24}};
    struct Personinfo *pPersoninfo;
    pPersoninfo=person;
    for(int i=0;i<5;i++,pPersoninfo++)
    {
        cout<<pPersoninfo->index<<endl;
        cout<<pPersoninfo->name<<endl;
        cout<<pPersoninfo->age<<endl;
    }
    
}