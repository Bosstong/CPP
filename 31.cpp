#include<iostream>
using namespace std;
int main(){
    int day;
    int x1;
    int x2=1;
    cin>>day;
    if(day==1){
        cout<<x2<<endl;
        return 0;
    }
    while(day>1){
        x1=(x2+1)*2;
        x2=x1;
        day--;
        }
        cout<<x1<<endl;
}