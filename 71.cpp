#include<iostream>
using namespace std;
void  mystrcpy(char s1[],char s2[]){
    int i=0;
    int j=0;
    while(s1[i]!='\0'){
        s2[j]=s1[i];
        i++;
        j++;
    }
    s2[i]='\0';
}
int main(){
    char s1[200];
    char s2[200];
    cin.getline(s1,200);
    mystrcpy(s1,s2);
    cout<<s2;
    return 0;
}