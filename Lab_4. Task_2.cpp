//Мурашов Иван Вячеславович, НКАбд-04-23
// 2. Напишите программу, которая запрашивает у пользователя число и выводит на экран сумму всех четных чисел от 1 до этого числа.

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cin >> num;
    for (int i=2; i <= num; i+=2)
    {
    sum += i;   
    }
    
    cout << sum << endl;
    
    return 0;
}
