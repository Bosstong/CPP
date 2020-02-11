#include<iostream>
#include<iomanip>
using namespace std;
long combi(int n,int r)
{
    int i;
    long p = 1;
    for(i=1;i<=r;i++)
    p=p*(n-i+1)/i;
    return p;
}
main(){
    int n,r,t;
    for(n=0;n<=12;n++)
    {
        for(r=0;r<=n;r++)
        {
            int i;
            if(r==0)
            {
                for(i=0;i<=(12-n);i++)
                cout<<"  ";
            }else
            {
                cout<<"  ";
            }
                cout<<setw(3)<<combi(n,r);
                }
            cout<<endl;
        }
    }