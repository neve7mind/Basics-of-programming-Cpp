
//3. Составьте программу для вычисления длин медиан треугольника, у которого длины сторон a, b, c.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale (LC_ALL, "RU");
    float a, b, c;
    cout << "Программа для вычисления длин медиан треугольника со сторонами a, b, c.\n";
    
    cout << "Введите длину стороны a: ";
    cin >> a;
    cout << "Введите длину стороны b: ";
    cin >> b;
    cout << "Введите длину стороны c: ";
    cin >> c;
    cout << "Длины медиан треугольника: " << sqrt((2*a*a+2*b*b-c*c)/4) << ", " << sqrt((2*c*c+2*b*b-a*a)/4) << ", " << sqrt((2*a*a+2*c*c-b*b)/4);
    
    return 0;
}
