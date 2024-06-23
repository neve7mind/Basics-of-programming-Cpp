
//37. Известно количество жителей в государстве и площадь его территории. Определить плотность населения в этом государстве.

#include <iostream>
//#include <math.h>
using namespace std;

int main()
{
    setlocale (LC_ALL, "RU");
    int people;
    float area;
    cout << "Нахождение плотности населения в определённом государстве\n";
    
    cout << "Введите количество жителей: ";
    cin >> people;
    cout << "Введите площадь территории: ";
    cin >> area;
    cout << "Плотность населения в этом государстве равна: " << people/area;
    
    return 0;
}
