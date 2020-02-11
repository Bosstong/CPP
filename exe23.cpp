#include<iostream>
#include<iomanip>
using namespace std;
int fun(int array[3][3])
{
    int i,j,t;
    for(i=0,j=0;i<3;i++)
    {
        t=array[i][j];
        array[i][j]=array[j][i];
        array[j][i]=t;
    }
    return 0;
}
main()
{
    int i,j;
    int array[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<"Converted Fornt"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cout<<setw(7)<<array[i][j];
        cout<<endl;
    }
    fun(array);
    cout<<"Converted result"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cout<<setw(7)<<array[i][j];
        cout<<endl;
    }
}