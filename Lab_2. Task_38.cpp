//Мурашов Иван Вячеславович, НКАбд-04-23
/* 38. Дано четырехзначное число. Определить, равна ли сумма двух первых его цифр сумме двух его последних цифр. */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout<<"Введите четырехзначное число: ";
    cin>>a;
    if(a/1000+a/100%10==a/10%10+a%10)
        cout<<"Сумма двух первых цифр числа равна сумме двух его последних цифр.";
    else
        cout<<"Сумма двух первых цифр числа не равна сумме двух его последних цифр.";

    return 0;
}
