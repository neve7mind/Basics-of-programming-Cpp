
// 14. Даны три числа. Найти среднее из них (то есть число, расположенное между наименьшим и наибольшим).

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, c;
    cout<<"Введите 3 числа: ";
    cin>>a>>b>>c;
    cout<<"Среднее число: ";
    if((a<=c) && (b<=a) || (a>=c) && (b>=a)) 
        cout<<a;
    else 
    {
        if((a>=b) && (b>=c) || (a<=b) && (b<=c))
            cout<<b;
        else
            cout<<c;
    }

    return 0;
}
