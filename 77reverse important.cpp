#include<iostream>
#include<string.h>
using namespace std;
void reverse(char s[],int i, int j){
    int a;
    int b;
    b = j-(i + 1);
    if(i<b){
        a=s[i];
        s[i]=s[b];
        s[b]=a;
        reverse(s,++i,j);
    }
}
int main(){
    char t[100];
    int i = 0;
    int k = 0;
    cin.getline(t,100);
    while(t[i]!='\0'){
        k=++i;
    }
    reverse(t,0,k);
    for(i=0;i<k;i++){
    cout<<t[i];}
    cout<<endl;
    }