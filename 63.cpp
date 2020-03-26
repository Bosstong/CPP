#include<iostream>
using namespace std;
double mypow(double a,int b){
    double sum=1.0;
    if(a==0){
        return 0;
    }else if(b==0){
        return 1;
    }else if(b>0){
        while(b>0){
            sum=sum*a;
            b--;
        }
        return sum;
    }else if(b<0){
        b=-b;
        while(b>0){
            sum=sum*a;
            b--;
        }
        sum=1.0/sum;
        return(sum);
    }
    return sum;
}
int main(){
    double a;
    int b;
    cin>>a>>b;
    cout<<mypow(a,b)<<endl;
    return 0;
}