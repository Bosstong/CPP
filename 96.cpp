#include<iostream>
#include<cmath>
using namespace std;
void statistics(double a[], int n, double *max, double *min, double *avg, double *stdev)
{
	int i = 0;
	*max = a[0];
	*min = a[0];
	*avg = a[0];
	*stdev = 0;
	for (i = 1; i < n; i++)
	{
        if(a[i]>*max){
            *max=a[i];
        }else{
            *max=*max;
        }
        if(a[i]<*min){
            *min=a[i];
        }else{
            *min=*min;
        }
        *avg=*avg+a[i];
	}
	*avg =*avg / n;
	for (i = 0; i < n; i++)
	{
		*stdev = *stdev + (a[i] - *avg)*(a[i] - *avg);
	}
	*stdev = sqrt(*stdev / n);
}

int input(double a[])
{
	int i = 0, n;
	while (1)
	{
		cin >> n;
		if (n != -9999)
		{
			a[i] = n;
			i++;
		}
		else
		{
			break;
		}
	}
	return i;
}

int main()
{
	double a[100], max, min, avg, stdev;
	int n;
	n = input(a);
	statistics(a, n, &max, &min, &avg, &stdev);
	cout << max << " " << min << " " << avg << " " << stdev << endl;
	return 0;
}