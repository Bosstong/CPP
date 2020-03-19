#include<iostream>
using namespace std;
int main(){
    double c[101];
    double temp;
    int i = 0;
    int j=0;
    while(cin>>c[i]&&c[i]!=-9999){
        i++;
        j=i;
    }
    for(int a =0;a<j-1;a++){
        for(int b = 0;b<j-1-a;b++){
            if(c[b]>c[b+1]){
                temp=c[b];
                c[b]=c[b+1];
                c[b+1]=temp;
            }
        }
    }
    cout<<c[j-1]<<endl;
    return 0;
}