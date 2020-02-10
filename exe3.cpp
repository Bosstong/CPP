#include<iostream>
#include<iomanip>
using namespace std;
main(){
    printf("%4d\n",1);
    cout<<setfill(' ')<<setw(4)<<1<<endl;
    printf("%04d\n",1);
    cout<<setfill(' ')<<setw(4)<<1<<endl;
}
