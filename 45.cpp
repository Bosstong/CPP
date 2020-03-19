#include<iostream>
using namespace std;
int main(){
double a[100];
double b[100];
double c[100];
    int n = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int x = 0;
    double sum=0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    for (i = 0, j = 0, k = 0; k < n; i++, j++, k++)
    {
        c[k] = a[i] * b[j];
    }
    while(x<n){
        sum+=c[x];
        x++;
    }
    cout<<sum<<endl;
    return 0;
}
