//Мурашов Иван Вячеславович, НКАбд-04-23
/*9. Дано четное число N (>0) и символы C1 и C2. Вывести строку длины N, которая 
состоит из чередующихся символов C1 и C2, начиная с C1. В тестах к данной задаче кириллицы нет. 
Если N нечетное, то ничего не выводится.*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int N;
    char C1, C2;
    cin >> N;
    cin >> C1 >> C2;
    
    if(N%2==0)
    {
        string s{};
        for(unsigned i=0; i<N; i++)
        {
            s.append(1, C1);
            i++;
            s.append(1, C2);
        }
        cout << s;
    }

    return 0;
}
