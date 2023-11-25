//Мурашов Иван Вячеславович, НКАбд-04-23
/*10. Дан целочисленный массив размера N. Вывести вначале все содержащиеся в данном массиве четные числа в порядке 
возрастания их индексов, а затем — все нечетные числа в порядке убывания их индексов.*/

#include <iostream>

using namespace std;

int main()
{
    unsigned int n=0, i=0, j=0, k=0, a=0, b=0;
    cin >> n;
    int arr[n], arr2[n], arr3[n];
    for(; i<n; i++)
        cin >> arr[i]; 
    
    for(i=0; i<n; i++)
    {
        if (arr[i]%2 == 0)
        {
            arr2[j] = arr[i];
            j++;
            
        }
        else
        {
            arr3[k] = arr[i];
            k++;
        }
    }
    a=j;
    b=k;
    for(j=0; j<a; j++)
    {    
        
        cout << arr2[j] << " ";
    }
    cout << endl;
    for(k=0; k<b; k++)
    {
        
        cout << arr3[b-k-1] << " ";
    }
    
    return 0;
}
