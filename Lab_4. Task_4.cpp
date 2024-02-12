//Мурашов Иван Вячеславович, НКАбд-04-23
/* 4. Напишите программу, которая запрашивает у пользователя число и выводит на экран таблицу умножения для этого числа от 1 до 10. */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float n;
    cout<<"Введите число: ";
    cin>>n;
    for(int i=1; i<11; i++)
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;

    return 0;
}
