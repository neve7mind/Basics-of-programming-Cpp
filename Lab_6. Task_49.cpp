
/*49. Дан целочисленный массив размера N (N>1). Если он является перестановкой, то есть содержит все числа от 1 до N, 
то вывести 0; в противном случае вывести номер первого недопустимого элемента.*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N], k=0;
    for(int i=0; i<N; i++)
        cin >> arr[i];
    
    for(int i=0; i<N; i++)
    {
        if(arr[i]>N || arr[i]<1)
        {
            cout << i+1;
            k++;
            break;
        }  
        for(int j=0; j<N; j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                cout << i+1;
                k++;
                break;
            }
        }
        if(k!=0)
            break;
    }
    if(k==0)
        cout << "0";
    
    return 0;
}
