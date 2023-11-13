//Мурашов Иван Вячеславович, НКАбд-04-23
/*10. Описать процедуру Swap(X, Y), меняющую содержимое переменных X и Y (X и Y — вещественные параметры, являющиеся 
одновременно входными и выходными). С ее помощью для данных переменных A, B, C, D последовательно 
поменять содержимое следующих пар: A и B, C и D, B и C и вывести новые значения A, B, C, D.*/

#include <iostream>
using namespace std;

float Swap(float &x, float &y)
{
    float s = x;
    x = y;
    y = s;
    return x;
    return y;
}

int main()
{
    float A, B, C, D;
    cin >> A >> B >> C >> D;
    Swap(A, B);
    Swap(C, D);
    Swap(B, C);
    cout << A << " " << B << " " << C << " " << D;

    return 0;
}
