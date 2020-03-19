#include <iostream>
using namespace std;
int main()
{
    const int M = 20, N = 20;
    double A[M][N];
    double b[100];
    int M1, N1;
    int i, j;
    int x = 0;
    cin >> N1 >> M1;
    for (i = 0; i < N1; i++)
    {
        for (j = 0; j < M1; j++)
        {
            cin >> A[i][j];
        }
    }
    for (i = 0; i < M1; i++)
    {
        b[i] = A[0][i];
        for (j = 1; j < N1; j++)
        {
            if (b[i] < A[j][i])
                b[i] = A[j][i];
        }
    }
    cout << b[x];
    x++;
    while (x < M1)
    {
        cout << " " << b[x];
        x++;
    }
    cout << endl;
    return 0;
}