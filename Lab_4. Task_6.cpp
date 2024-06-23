
//6. Напишите программу, которая запрашивает у пользователя число и выводит на экран факториал этого числа.

#include <iostream>
using namespace std;

int main()
{
    int a, fac=1;
    cin >> a;
    if (a >= 0) 
    {
        for (int i=1; i<=a; i++)
        {
            fac *= i;
        }
        cout << fac;
    }
    else
        cout << "Число должно быть неотрицательным и целым";
    return 0;
}
