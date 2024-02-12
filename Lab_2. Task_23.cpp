//Мурашов Иван Вячеславович, НКАбд-04-23
/* 23. Даны вещественные числа a, b, c (a не равно 0). Выяснить, имеет ли уравнение ax2+bx+c=0 вещественные корни. */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a;
    cout<<"Введите a: ";
    cin>>a;
    if(a==0)
        cout<<"a не равно 0";
    else
    {
        float b, c;
        cout<<"Введите b: ";
        cin>>b;
        cout<<"Введите c: ";
        cin>>c;
        float D=b*b-4*a*c;
        if(D>=0)
            cout<<"Уравнение имеет вещественные корни.";
        else
            cout<<"Уравнение не имеет вещественных корней.";
    }

    return 0;
}
