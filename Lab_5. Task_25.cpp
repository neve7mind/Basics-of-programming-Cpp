//Мурашов Иван Вячеславович, НКАбд-04-23
/*Описать функцию IsSquare(K) логического типа, возвращающую True, если целый параметр K (> 0) является квадратом некоторого 
целого числа, и False в противном случае. С ее помощью найти количество квадратов в наборе из 10 целых положительных чисел.*/

#include <iostream>
#include <math.h>
using namespace std;

bool IsSquare(unsigned int K) 
{
    unsigned int sq = sqrt(K);
    return((sq*sq) == K);
}

int main() 
{
    bool is_sq[10];
    unsigned int K;
    
    for(int i=0; i<10; i++) 
    {
        cin >> K;
        is_sq[i] = IsSquare(K);
    }

    for(int i=0; i<10; i++) 
    {
        if(is_sq[i]) 
            cout << "1 ";
        else
            cout << "0 ";
    }
    
    return 0;
}
