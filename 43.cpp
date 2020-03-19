#include <iostream>
using namespace std;
int main()
{
    const int M = 20, N = 20;
    double A[M][N];
    double b[100];
    int M1, N1;
    int i, j;
    cin >> N1 >> M1;
    for (i = 0; i < N1; i++)
    {
        for (j = 0; j < M1; j++)
        {
            cin >> A[i][j];
        }
    }
    for (i = 0; i < N1; i++)
    {
        b[i] = A[i][0];
        for (j = 1; j < M1; j++)
        {
            if (b[i] < A[i][j])
                b[i] = A[i][j];
        }
    }
    for(int x=0;x<N1;x++){
        cout<<b[x]<<endl;
    }
    return 0;
}