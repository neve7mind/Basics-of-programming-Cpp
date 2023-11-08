//Мурашов Иван Вячеславович, НКАбд-04-23
/*6.Описать процедуру DigitCountSum(K, C, S), находящую количество C цифр целого положительного числа K, 
а также их сумму S (K — входной, C и S — выходные параметры целого типа). 
С помощью этой процедуры найти количество и сумму цифр для каждого из пяти данных целых чисел.*/

#include <iostream>
using namespace std;

int DigitCountSum(unsigned int K, unsigned int &C, unsigned int &S)
{
    unsigned int KC = K;
    for(int i=1; KC>0; i++)
    {
        KC/=10;
        C = i;
    }
    
    S=0;
    while (K!=0)
    {
        S+=K%10;
        K/=10;
    }
    return C;
    return S;
}

int main()
{
    unsigned int K, C, S;
    int cs[2][5];
    
    for(int i=0; i<5; i++)
    {
        cin >> K;
        DigitCountSum(K, C, S);
        cs[0][i] = C;
        cs[1][i] = S;
    }
    
    for(int i=0; i<5; i++)
        cout << cs[0][i] << " " << cs[1][i] << endl;
    
    return 0;
}
