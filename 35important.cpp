#include<iostream>
using namespace std;
int main(){
    const int b=20;
    double A[b][b];
    double B[b][b];
    int m,n;
    int a;
    int c=0;
    cin>>a;
    m=n=a;
    if(a>=1&&a<=5){
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>A[i][j];
            }
        }
    }else{
        cout<<"matrix order error"<<endl;
        return 0;
    }
    for(int j=0;j<a;j++){
        for(int i=0;i<a;i++){
            B[j][i]=A[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(j<a-1?"%g ":"%g",B[i][j]);
            }
            cout<<endl;
        }
    return 0;
}