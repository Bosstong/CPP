#include<iostream>
#include<cstring>
using namespace std;
bool check(char *str){
    int i;
    for(i=0;i<32;i++){
        if(str[i]!='1'&&str[i]!='0'){
            return false;
        }else{
            return true;
        }
    }
}
int trans(char *str){
    int n=0;
    int i;
    for(i=0;i<8;i++){
        if(str[i]=='1'){
            n=n*2+1;
        }else{
            n=n*2;
        }
    }
    return n;
}
int main(){
    char IP[33];
    cin>>IP;
    if(strlen(IP)!=32){
        return 0;
    }else{
        if(!check(IP)){
            return 0;
        }else{
            cout<<trans(IP)<<"."<<trans(IP+8)<<"."<<trans(IP+16)<<"."<<trans(IP+24)<<endl;
    }
    return 0;
}
}