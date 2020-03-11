#include<iostream>
using namespace std;
int main(){
    int a[10];
    int max=0;
    int min=100;
    int sum=0;
    double average;
    int i;
    for(i =0;i<=9;i++){
        cin>>a[i];
        if(a[i]<0||a[i]>100){
            cout<<"the score is invalid"<<endl;
            return 0;
        }
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
            sum=sum+a[i];
    }
    sum=sum-max-min;
    average=sum/8.0;
    cout<<average<<endl;
    return 0;
}