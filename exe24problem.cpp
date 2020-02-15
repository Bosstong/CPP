#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
main(){
    char str1[30];
    char str2[20];
    cout<<"please input string1:"<<endl;
    gets(str1);
    cout<<"please input string2:"<<endl;
    gets(str2);
    strcat(str1,str2);
    cout<<"Now the string 1 is:"<<endl;
    puts(str1);


}