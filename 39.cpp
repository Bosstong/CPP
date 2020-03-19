#include<iostream>
using namespace std;
int main(){
    double a[100];
    double b[100];
    int n=0;
    int i=0;
    int c=0;
    int d=0;
    int j=0;
    cin>>n;
    for(i =0;i<n;i++){
        cin>>a[i];
        j=i;
    }
    for(c=0;j>=0&&c<=n;c++,j--){
        b[c]=a[j];
    }
    cout<<b[d];
    d=d+1;
    while(d<n){
        cout<<" "<<b[d];
        d++;
    }
    cout<<endl;
    return 0;
}