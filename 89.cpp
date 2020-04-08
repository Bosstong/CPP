#include<iostream>
using namespace std;
void reset(int *a, int *b){
    int average=(*a+*b)/2.0+0.5;
    *a=average;
    *b=average;
}
int main(){
    int a=0;
    int b=0;
    cin>>a>>b;
    reset(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}