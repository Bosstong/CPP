#include<iostream>
#include<string>
using namespace std;
int main(){
    char a[20];
    cin.getline(a,20);
    char b;
    int i = 0;
    while(a[i]!='\0'){
        if(a[i]>='a'&&a[i]<='z'){
            b=(a[i]-'a'+3)%26+'A';
        }else if(a[i]>='A'&&a[i]<='Z'){
            b=(a[i]-'A'+3)%26+'a';
        }
        i++;
        cout.put(b);
    }
    cout<<endl;
    return 0;
}