
/*27. Даны целые положительные числа N1(>0) и N2(>0) и строки S1 и S2. Получить из этих строк новую строку, 
содержащую первые N1 символов строки S1 и последние N2 символов строки S2 (в указанном порядке).*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N1, N2;
    cin >> N1 >> N2;
    string S, S1, S2;
    getline(cin, S);
    getline(cin, S1);
    getline(cin, S2);
    for(int i=0; i<N1; i++){
        S.append(1, S1[i]);
    }
    for(int j=S2.size()-N2; j<S2.size(); j++){
        S.append(1, S2[j]);
    }
    cout<<S;
    return 0;
}
