
// 46. Написать программу, которая по высоте воздушного столбца, выводит название сфера.

#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "RU");
    float h;
    do {
        cin >> h;
        if (h >= 0 && h <= 12)
            cout << "Тропосфера";
        else if (h >= 12 && h <= 50)
            cout << "Стратосфера";
        else if (h >= 50 && h <= 90)
            cout << "Мезосфера";
        else if (h >= 90 && h <= 500)
            cout << "Термосфера";
        else if (h >= 500 && h <= 2500)
            cout << "Экзосфера";
        else 
            cout << "Нет опр. слоя атмосферы\n";
    }
    while (h < 0 || h > 2500);
    
    return 0;
}
