#include<iostream>
using namespace std;
void big(char a[]){
    int i=0;
    while(a[i]!='\0'){
        if(a[i]>='a'&&a[i]<='z'){
            a[i]=a[i]-32;
            i++;
        }else{
            a[i]=a[i];
            i++;
        }
    }
}
int main(){
    char a[200];
    cin>>a;
    big(a);
    cout<<a<<endl;
    return 0;
}