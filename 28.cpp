#include <iostream>
using namespace std;
int main(){
	int n;
    int a[1000];
    a[0]=0;
    a[1]=1;
	cin>>n;
	for(int i=0;i<=n;i++){
		a[i+2]=a[i]+a[i+1];
		if(i!=n){
            cout<<a[i]<<" ";
            }
		else 
        {
            cout<<a[i]<<endl;
        }
	}
	return 0;
} 