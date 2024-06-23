
/*7. Описать процедуру InvDigits(K), меняющую порядок следования цифр целого положительного числа K на обратный 
(K — параметр целого типа, являющийся одновременно входным и выходным). С помощью этой процедуры поменять порядок следования цифр 
на обратный для каждого из пяти данных целых чисел.*/

#include <iostream>
using namespace std;

void InvDigits (unsigned int K)
{
    while(K!=0)
    {
    cout << K%10;
    InvDigits(K/10);
    break;
    }
}
int main()
{
    unsigned int K;
    for (int i=0; i<5; i++)
    {
        cin >> K;
        InvDigits(K);
        cout << endl;
    }
    
    return 0;
}
