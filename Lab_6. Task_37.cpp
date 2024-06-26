
/*37. Дан массив размера N (N>1). Найти количество участков, на которых его элементы монотонно возрастают. 
Размер каждого участка должен содержать как минимум 2 элемента. При отсутствии таких участков выведите 0.*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    float arr[N], k=0;
    for(int i=0; i<N; i++)
        cin>>arr[i];
    for(int i=0; i<N-1; i++)
    {
        int j=i+1;
        if(arr[i]<=arr[i+1])
        {
            while(j<N && arr[j-1]<=arr[j]) 
                j++;
            if(j-i>=2)
            {
                k++;
                i=j-1;
            }
        }
    }
    cout<<k;

    return 0;
}

