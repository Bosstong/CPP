#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
int red[6],i,blue;
int j,tmp,k=0;
int flag;
int m=1;
srand(time(NULL));
while(m<=1)
{
printf("\n第%d期模拟双色球开奖号码：\n红色双色球:   ",m);
for(i=0;i<6;i++)
{
do{
flag =0;
red[i]=rand()%33+1;
for(k=i-1;k>=0;k--)
{
if(red[k]==red[i])
{
flag=1;
break;
}
}
}while(flag);
}
for(i=0;i<6;i++)
{
for(j=0;j<5-i;j++)
{
if(red[j]>red[j+1])
{
tmp=red[j+1];
red[j+1]=red[j];
red[j]=tmp;
}
}
}
blue=rand()%16+1;
for(i=0;i<6;i++)
{
printf("%d ",red[i]);
}
printf("\n蓝色双色球:   %d\n",blue);
m++;
}
}
