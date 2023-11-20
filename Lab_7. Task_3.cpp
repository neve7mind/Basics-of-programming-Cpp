//Мурашов Иван Вячеславович, НКАбд-04-23
/*3. Даны целые положительные числа M (число строк), N(число столбцов) и набор из M вещественных чисел. Сформировать матрицу 
размера M×N, у которой в каждом столбце содержатся все числа из исходного набора (в том же порядке).*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int M, N;
    cin >> M >> N;
    float arr[M][N];
    for(int i=0; i<M; i++)
    {
        cin >> arr[i][0];
        for(int j=0; j<N; j++)
        arr[i][j] = arr[i][0];
    }
    for (int i=0; i<M; i++)
    {
        for (int j=0; j<N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
