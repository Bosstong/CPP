#include<iostream>
using namespace std;
int main(){
    char a[100];
    int i=0;
    int sum =0;
    cin.getline(a,100);
    while(a[i]!='\0'){
        i++;
        sum++;
    }
    cout<<sum<<endl;
    return 0;
}