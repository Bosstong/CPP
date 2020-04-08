#include<iostream>
using namespace std;
void clear(int n,int *a){
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    return;
}
int main(){
    int n=0;
    int i=0;
    int a[100];
    for(i=0;i<100;i++){
        cin>>a[i];
        if(a[i]==-1){
            break;
        }
    }
    cin>>n;
    clear(n,a);
    for(int j=0;j<i-1;j++){
        cout<<a[j]<<" ";
    }
    cout<<a[i-1];
    cout<<endl;
    return 0;
}