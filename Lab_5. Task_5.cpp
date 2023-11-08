//Мурашов Иван Вячеславович, НКАбд-04-23
/*5. Описать процедуру RectPS(x1, y1, x2, y2, P, S), вычисляющую периметр P и площадь S прямоугольника со сторонами, параллельными
осям координат, по координатам (x1, y1), (x2, y2) его противоположных вершин (x1, y1, x2, y2 — входные, P и S — выходные параметры
вещественного типа). С помощью этой процедуры найти периметры и площади трех прямоугольников с данными противоположными вершинами.*/

#include <iostream>
using namespace std;

float RectPS(float x1, float y1, float x2, float y2, float& P, float& S)
{
    P = (abs(x2 - x1) + abs(y2 - y1)) * 2;
    S = (abs(x2 - x1) * abs(y2 - y1));
    return P;
    return S;
}

int main()
{
    float x1, y1, x2, y2, P, S;
    float num[2][3];
    for (int i = 0; i < 3; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        RectPS(x1, y1, x2, y2, P, S);
        num[0][i] = P;
        num[1][i] = S;
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
        cout << num[0][i] << " " << num[1][i] << endl;


    return 0;
}
