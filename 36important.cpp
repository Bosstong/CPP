#include<iostream>
#include<string>
using namespace std;
struct list{
    char name[100];
    char singer[100];
    int amount;
}list[5],temp;
int main(){
    int i =0;
    int j =0;
        for(i=0;i<5;i++){
        cin>>list[i].name>>list[i].singer>>list[i].amount;
    }
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            if(list[j].amount<list[j+1].amount){
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        cout<<list[i].name<<" "<<list[i].singer<<" "<<list[i].amount<<endl;
    }
    return 0;
}