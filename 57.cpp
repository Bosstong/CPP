#include<iostream>
using namespace std;
int imax(int array[],int count){
    int i,j;
    int temp;
    for(i=0;i<count-1;i++){
        for(j=0;j<count-1-i;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    return array[count-1];
}
int imin(int array[],int count){
    int i,j;
    int temp;
    for(i=0;i<count-1;i++){
        for(j=0;j<count-1-i;j++){
            if(array[j]<array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    return array[count-1];
}
int main(){
    int array[100];
    int i=0;
    int n;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    cout<<imax(array,n)<<endl;
    cout<<imin(array,n)<<endl;
    return 0;
}
