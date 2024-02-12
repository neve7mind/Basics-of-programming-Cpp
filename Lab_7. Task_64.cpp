//Мурашов Иван Вячеславович, НКАбд-04-23
/*64. Дана матрица размера M × N. Удалить столбец, содержащий максимальный элемент матрицы.
Сперва вводятся значения M и N, определяющие количество строк и столбцов матрицы соответственно. 
Затем вводятся M×N элементов матрицы. Значения элементов матрицы могут быть вещественными.*/

#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    float arr[M][N];
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
            cin>>arr[i][j];
    }
    int max=arr[0][0];
    int k=0;
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
                k=j;
            }
        }
    }
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(j!=k)
                cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}


