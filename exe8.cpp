#include<iostream>
#include<iomanip>
using namespace std;
main(){
    long nWord=0x12345678;
    int nBits;
    nBits=nWord&0xFFFF;
    printf("low bits are 0x%x\n",nBits);
    cout<<"low bits are 0x"<<hex<<nBits<<endl;
    nBits=(nWord&0xFFFF0000)>>16;
    printf("high bits is 0x%x\n",nBits);
    cout<<"high bits is 0x"<<hex<<nBits<<endl;
}