
/* 10. Универмаг в ноябре продал товаров на А млн. р., что на 15% больше, чем в октябре. 
На какую сумму были проданы товары в октябре? */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float A;
    cout<<"Введите выручку универмага за ноябрь: ";
    cin>>A;
    cout<<"В октябре были проданы товары на "<<A/1.15<<" млн. рублей.";
    
    return 0;
}
