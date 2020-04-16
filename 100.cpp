#include<iostream>
#include<cstring>
using namespace std;
char *digitName(int n){
    static char *month[]={
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve"
    };
    return(n>=1&&n<=12)?month[n]:month[0];
}
int main(){
    int n;
    cin>>n;
    cout<<digitName(n)<<endl;
    return 0;
}