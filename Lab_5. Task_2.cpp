
/*Описать процедуру PowerA234(A, B, C, D), вычисляющую вторую, третью и четвертую степень числа A и возвращающую эти степени 
соответственно в переменных B, C и D (A — входной, B, C, D — выходные параметры; все параметры являются вещественными). 
С помощью этой процедуры найти вторую, третью и четвертую степень пяти данных чисел.*/

#include <iostream>
using namespace std;

void PowerA234(float A, float &B, float &C, float &D) 
{
    B = A*A;
    C = B*A;
    D = C*A;
}
int main()
{
    float a, b, c, d;
    for (int i=0; i<5; i++)
    {
        
        cin >> a;
        PowerA234(a, b, c, d);
        cout << b << " " << c << " " << d << endl;
    }

    return 0;
}
