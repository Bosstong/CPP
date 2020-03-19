#include<iostream>
using namespace std;
int main(){
    char a[200];
    int count =0;
    int i=0;
    while((a[i]=cin.get())!='\n'){
        if(a[i]>='A'&&a[i]<='Z')
            count++;
    }
    i++;
    cout<<count<<endl;
    return 0;
}