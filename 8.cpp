#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double A,B,C,x,y,z,d;
    cin>>A>>B>>C;
    cin>>x>>y;
    z=A*x+B*y+C;
    z<0?z=-z:z=z;
    d=z/sqrt(A*A+B*B);
    d=int(d*100+0.5)/100.00;
    cout<<d<<endl;
    return 0;
}