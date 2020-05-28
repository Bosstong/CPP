#include<stdio.h>
int main(){
    int a[10];
    int b=0;
    int i=0;
    int j=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    while(j<10){
        if(b==a[j]){
            printf("%d\n",j);
            return 0;
        }else{
            j++;
        }
    }
    return 0;
}
