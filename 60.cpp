#include<iostream>
#include<string.h>
using namespace std;
int count(char m[],int k){
int count=0,n=0,i=0;
for(i=0,n=0,count=0;i<k;i++){
if(m[i]==' '){
n=0;}
else if(m[i]>='0' && m[i]<='9'){
n=0;}
else if(m[i]>='!' && m[i]<='/'){
n=0;}
else if(m[i]>=':' && m[i]<='@'){
n=0;}
else if(m[i]>='[' && m[i]<='`'){
n=0;}
else if(m[i]>='{' && m[i]<='~'){
n=0;}
else if(n==0)
{
n=1;
count++;
}
}
return count;
}
int main(){
    char a[500];
    int k=0;
    cin.getline(a,500);
    k=strlen(a);
    cout<<count(a,k)<<endl;
    return 0;
}
