
/* 27. Описать функцию IsPowerN(K, N) логического типа, возвращающую True, если целый параметр K (>= 0) является 
степенью числа N (> 1), и false в противном случае. Дано число N (> 1) и набор из 10 целых чисел. 
С помощью функции IsPowerN найти количество степеней числа N в данном наборе. */

#include <iostream>
using namespace std;

bool IsPowerN(unsigned int &K, unsigned int &N)
{
    if(K<0 || N<=1)
        return false;
    while (K%N == 0)
        K /= N;
    return K == 1;
}

int main()
{
    unsigned int n;
    cin>>n;
    unsigned int arr[10];
    for(int i=0; i<10; i++)
        cin>>arr[i];
    for(int i=0; i<10; i++)
        cout<<IsPowerN(arr[i], n)<<" ";
    
    return 0;
}
