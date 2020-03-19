#include <iostream>
using namespace std;
int main()
{
    const int M = 20, N = 20;
    double A[M][N], B[M][N], C[M][N];
    int M1 = 0, N1 = 0;
    cin >> M1 >> N1;
    for (int i = 0; i < M1; i++)
    {
        for (int j = 0; j < N1; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < M1; i++)
    {
        for (int j = 0; j < N1; j++)
        {
            cin >> B[i][j];
        }
    }
    for (int k = 0; k < M1; k++)
    {
        for (int l = 0; l < N1; l++)
        {
            C[k][l] = A[k][l] + B[k][l];
        }
    }
    for (int i = 0; i < M1; i++)
    {
        for (int j = 0; j < N1; j++)
        {
            printf(j < N1 - 1 ? "%g " : "%g", C[i][j]);
        }
        cout << endl;
    }
    return 0;
}