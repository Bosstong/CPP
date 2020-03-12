#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int a;
    int b;
    int c;
    int left1;
    int left2;
    cin>>n;
    if(n<0||n>99){
        cout<<"the money is invalid!"<<endl;
    }else{
        for(a=n/25;a>=0;a--){
            left1=n-25*a;
            for(b=left1/10;b>=0;b--){
                left2=left1-10*b;
                for(c=left2/5;c>=0;c--){
                    if(25*a+10*b+5*c+(n-25*a-10*b-5*c)==n){
                        sum++;
                    }
                }
            }
        }
        cout<<sum<<endl;
        return 0;
    }
}