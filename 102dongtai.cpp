#include<iostream>
using namespace std;
int main(){
    int m, n,sum=0;
	cin >> m >> n;
    int **p = new int *[m];
    for (int i = 0; i < m; i++)
	{
		p[i] = new int[n];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >>p[i][j];
			sum += p[i][j];
		}
	}
for (int i = 0; i < n; i++)
	{
		delete[]p[i];
	}
	delete[]p;
	cout<< sum;
	return 0;
}