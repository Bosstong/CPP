#include<iostream>
#include<string.h>
using namespace std;
void mystrrev(int i ,char str[],char str1[],int n){
    int j=0;
    str1[n]='\0';
    for(i=n-1;i>=0;i--,j++){
        str1[j]=str[i];
    }
}
int main(){
    char str[100];
    char str1[100];
    int i=0;
    cin.getline(str,100);
    int n=strlen(str);
    mystrrev(i,str,str1,n);
    for(int k=0;k<n;k++){
        cout<<str1[k];
    }
    return 0;
}