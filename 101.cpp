#include<iostream>
using namespace std;
char *replace(char *a){
    int i=0;
    int j=0;
    int n=0;
    int x=0;
    int length=0;
    while(a[i]!='\0'){
        i++;
    }
    while(a[j]==' '){
        j++;
    }
    n=i-2;
    while(a[n]==' '){
        n--;
    }
    length=n-j+2;
    char *b=new char[length];
    for(x=0;x<length-1;x++){
        b[x]=a[x+j];
    }
    b[x]='#';
    b[x+1]='\0';
    return b;
}
int main()
{
	char *a=new char[100];
	cin.getline(a, 100);
	cout << replace(a);
    cout<<endl;
	return 0;
}