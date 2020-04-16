#include<iostream>
using namespace std;
int main(){
    int m=0;
    int n=0;
    int sum=0;
    cin>>m>>n;
    int(*p)[n];
    int a[m][n];
    for(p=a;p<a+m;p++){
        for(int j=0;j<n;j++){
            cin>>*(*p+j);
            sum+=*(*p+j);
        }
    }
    cout<<sum<<endl;
    return 0;
}