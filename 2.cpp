#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x1,x2,y1,y2,d,x;
    cin>>x1>>y1;
    cin>>x2>>y2;
    x=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    d=sqrt(x);
    cout<<d<<endl;
    return 0;
}