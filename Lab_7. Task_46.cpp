//Мурашов Иван Вячеславович, НКАбд-04-23
/*46. Дана матрица размера M × N. Найти максимальный среди элементов тех столбцов, которые упорядочены либо по возрастанию, 
либо по убыванию. Если упорядоченные столбцы в матрице отсутствуют, то вывести 0.*/

#include <iostream>
using namespace std;

int main()
{
    int m, n, len=0;
    cin>>m>>n;
    float mat[m][n], arr[n], max=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            cin>>mat[i][j];
    }
    for(int j=0; j<n; j++)
    {
        int k=1;
        for(int i=0; i<m-1; i++)
        {
            if(mat[i][j]<=mat[i+1][j])
                k++;
        }
        if(k==m)
        {
            arr[len]=j;
            len++;
        }
    }
    for(int j=0; j<n; j++)
    {
        int k=1;
        for(int i=0; i<m-1; i++)
        {
            if(mat[i][j]>=mat[i+1][j])
                k++;
        }
        if(k==m)
        {
            arr[len]=j;
            len++;
        }
    }
    for(int i=0; i<len; i++)
    {
        for(int s=0; s<m; s++)
        {
            int j=arr[i];
            if(mat[s][j]>max)
                max=mat[s][j];
        }
    }
    cout<<max;

    return 0;
}
