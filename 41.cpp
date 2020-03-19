#include<iostream>
using namespace std;
int main(){
    double a[30]={-1,15,-40,-180,99,-122,-124,27,192,128,-165,95,161,-138,-183,51,107,39,-184,113,-63,9,107,188,-11,-13,151,-52,7,6};
    int i=0;
    int j= 0;
    int b =0;
    double average=0;
    double max=-184 ;
    double min=192 ;
    double sum=0.0;
    cin>>i>>j;
    if(i<0||j>30||i>=j){
        cout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
        return 0;
    }  
    for(b=i;b<=j-1;b++){
        sum=sum+a[b];
        if(a[b]>max){
            max=a[b];
        }
        if(a[b]<min){
            min=a[b];
        }
    }
    average=sum/(j-i);
    cout<<max<<" "<<min<<" "<<sum<<" "<<average<<endl;
    return 0;
}