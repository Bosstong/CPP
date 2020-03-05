#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x1,x2,y1,y2,k;
    cin>>x1>>y1;
    cin>>x2>>y2;
    k=(y2-y1)/(x2-x1);
    cout<<k<<endl;
    return 0;
}