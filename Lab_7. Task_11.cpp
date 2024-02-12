//Мурашов Иван Вячеславович, НКАбд-04-23
/*11. Дана матрица размера M×N. Вывести ее элементы в следующем порядке: первая строка слева направо, 
вторая строка справа налево,третья строка слева направо, четвертая строка справа налево и т.д.*/

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
            cin >> arr[i][j];
    }
    for(int i=0; i<M; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<N; j++)
                cout << arr[i][j] << " ";
        }
        else
        {
            for(int j=N-1; j>-1; j--)
                cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

