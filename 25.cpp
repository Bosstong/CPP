#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char a[20];
    double sum;
    int i = 0;
    cin>>a;
    while(a[i]!='\0'){
        sum+=a[i]-'0';
        i++;
    }
    cout<<sum<<endl;
    return 0;
}