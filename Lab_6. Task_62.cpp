//Мурашов Иван Вячеславович, НКАбд-04-23
/*62. Дан массив A размера N. Сформировать два новых массива B и C: в массив B записать 
все положительные элементы массива A, в массив C — все отрицательные (сохраняя исходный порядок следования элементов). 
Вывести вначале размер и содержимое массива B, а затем — размер и содержимое массива C.*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int na=0, nb=0, nc=0;
    cin >> na;
    double A[na], B[na], C[na];
    for (int i=0; i<na; i++)
    {
        cin >> A[i];
        if (A[i] > 0)
        {
            B[nb] = A[i];
            nb += 1;
        }
        else if (A[i] < 0)
        {
            C[nc] = A[i];
            nc += 1;
        }
    }
    cout << nb << endl;
    for (int i=0; i<nb; i++)
        cout << B[i] << " ";
    cout << endl;
    
    cout << nc << endl;
    for (int i=0; i<nc; i++)
        cout << C[i] << " ";
    
    return 0;
}
