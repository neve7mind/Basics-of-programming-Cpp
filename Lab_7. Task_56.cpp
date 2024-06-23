
/*56. Дана матрица размера M×N (N — четное число). Поменять местами левую и правую половины матрицы.*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int M, N;
    cin >> M >> N;
    float arr[M][N];
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
            cin >> arr[i][j];
    }
    for (int i=0; i<M; i++)
    {
        for (int j=(N/2); j<N; j++)
            cout << arr[i][j] << " ";
        for(int k=0; k<(N/2); k++)
            cout << arr[i][k] << " ";
        cout << endl;
    }

    return 0;
}
