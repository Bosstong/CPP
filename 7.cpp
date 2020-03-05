#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,sum;
    double average;
    int y;
    cin>>a>>b>>c>>d>>e>>f>>g;
    sum=a+b+c+d+e+f+g;
    average=sum/7;
    y=int(average+0.5);
    cout<<y<<endl;
    return 0;
}