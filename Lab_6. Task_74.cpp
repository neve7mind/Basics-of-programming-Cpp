
/*74. Дан массив размера N (N>1). Обнулить элементы массива, расположенные между его минимальным 
и максимальным элементами (не включая минимальный и максимальный элементы).*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    float arr[N];
    for(int i=0; i<N; i++)
        cin >> arr[i];
    float max=arr[0], min=arr[0];
    int kmax=0, kmin=0;
    for(int i=0; i<N; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            kmax=i;
        }
    }
    for(int i=0; i<N; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            kmin=i;
        }
    }
    if(kmin<kmax)
    {
        for(kmin+1; kmin+1<kmax; kmin++)
            arr[kmin+1]=0;
    }
    else{
        for(kmax+1; kmax+1<kmin; kmax++)
            arr[kmax+1]=0;
    }
    for(int i=0; i<N; i++)
        cout << arr[i] << " ";
    
    return 0;
}
