
//26. Дана сторона равностороннего треугольника. Найти его площадь.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale (LC_ALL, "RU");
    float a;
    cout << "Нахождение площади равностороннего треугольника по его стороне\n";
    
    cout << "Введите длину стороны: ";
    cin >> a;
    cout << "Площадь равностороннего треугольника равна: " << a*a*sqrt(3)/4;
    
    return 0;
}
