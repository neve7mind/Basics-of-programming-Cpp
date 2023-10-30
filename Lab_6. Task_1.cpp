//Мурашов Иван Вячеславович, НКАбд-04-23
/*1. Дано целое число N. Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных 
нечетных чисел: 1, 3, 5, … .*/

#include <iostream>
#define ll long long
using namespace std;

int main()
{
    
    ll n, k=1;
    cin >> n;
    ll narr[n];
    for(int i=0; i<n; i++)
    {
        narr[i] = k;
        k+=2;
        cout << narr[i] << " ";
    }
    
    return 0;
}
