//Мурашов Иван Вячеславович, НКАбд-04-23
/*36. Дана целочисленная матрица размера M × N, элементы которой могут принимать значения от 0 до 100.
Различные строки матрицы назовем похожими, если совпадают множества чисел, встречающихся в этих строках.
Найти количество строк, похожих на первую строку данной матрицы.*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int M, N, k, l=0;
    cin >> M >> N;
    float arr[M][N], tmp=0;
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
            cin >> arr[i][j];
    }
    
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N-1; j++)
        {
            while(j>=0 && arr[i][j] > arr[i][j+1])
		    {
		        tmp = arr[i][j];
			    arr[i][j] = arr[i][j+1];
			    arr[i][j+1] = tmp;
			    j--;
		    }
        }
    }

    for(int i=1; i<M; i++)
    {
        k=0;
        for(int j=0; j<N; j++)
        {
            if(arr[i][j] == arr[0][j]) 
                k++;
        }
        if(k==N)
            l++;
    }
    cout << l;
    
    return 0;
}
