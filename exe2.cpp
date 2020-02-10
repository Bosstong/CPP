#include<iostream>
using namespace std;
main(){
    float x =20;
    float y =-400.00;
    cout<<x<<' '<<y<<endl;
    cout.setf(ios::showpoint);
    cout<<x<<' '<<y<<endl;
    cout.unsetf(ios::showpoint);
    cout.setf(ios::scientific);
    cout<<x<<' '<<y<<endl;
    cout.setf(ios::fixed);
    cout<<x<<' '<<y<<endl;
}