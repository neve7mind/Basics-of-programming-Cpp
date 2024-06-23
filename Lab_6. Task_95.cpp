
/*95. Дан массив вещественных чисел размера N (N>1). Удалить из массива все соседние одинаковые 
элементы, оставив их первые вхождения.*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    float arr[N];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    float k = arr[0];
    cout<<k<<" ";
    for(int i=1; i<N; i++){
        if(arr[i]!=k){
            k = arr[i];
            cout<<k<<" ";
        }
    }
    return 0;
}
