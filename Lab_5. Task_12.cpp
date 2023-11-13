//Мурашов Иван Вячеславович, НКАбд-04-23
/*12. Описать процедуру SortInc3(A, B, C), меняющую содержимое переменных A, B, C таким образом, чтобы их значения оказались 
упорядоченными по возрастанию (A, B, C — вещественные параметры, являющиеся одновременно входными и выходными). С помощью этой 
процедуры упорядочить по возрастанию два данных набора из трех чисел: (A1, B1, C1) и (A2, B2, C2).*/

#include <iostream>
using namespace std;

void SortInc(float &a, float &b, float &c)
{
    if(a > b && b > c)
        cout << c << ' ' << b << ' ' << a;
    if(a > b && a > c && b < c)
        cout << b << ' ' << c << ' ' << a;
    if(b > a && a > c)
        cout << c << ' ' << a << ' ' << b;
    if(b > c && a < c)
        cout << a << ' ' << c << ' ' << b;
    if(c > a && a > b)
        cout << b << ' ' << a << ' ' << c;
    if(c > b && a < b)
        cout << a << ' ' << b << ' ' << c;
    if(a == b && b > c)
        cout << c << ' ' << b << ' ' << a;
    if(a == c && c > b)
        cout << b << ' ' << a << ' ' << c;
    if(a == b && b == c)
        cout << c << ' ' << b << ' ' << a;
    if(a == b && b < c)
        cout << a << ' ' << b << ' ' << c;
    if(a == c && c < b)
        cout << a << ' ' << c << ' ' << b;
    if(b == c && c < a)
        cout << c << ' ' << b << ' ' << a;
    if(b == c && c > a)
        cout << a << ' ' << b << ' ' << c;
}

int main()
{
    float a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    SortInc(a1, b1, c1);
    cout << '\n';
    SortInc(a2, b2, c2);
    
    return 0;
}
