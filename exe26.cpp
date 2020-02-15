#include<iostream>
#include<iomanip>
using namespace std;
main(){
    int i;
    int j;
    int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    cout<<"the array is:"<<endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        cout<<*(*(a+i)+j);
        cout<<endl;
    }
}