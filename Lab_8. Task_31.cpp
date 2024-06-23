
/*31. Даны строки S и S0. Проверить, содержится ли строка S0 в строке S. 
Если содержится, то вывести True, если не содержится, то вывести False.*/

#include <iostream>
using namespace std;

int main()
{
    string S{}, S0{}, res{};
    getline(cin, S);
    getline(cin, S0);
    
    for(unsigned i=0; i<S.size()-S0.size()+1; i++)
    {
        for(unsigned j=0; j<S0.size(); j++)
        {
            if(S0[j]!=S[i+j])
            {
                res = "False";
                break;
            }
            else 
            {
                res = "True";
            }
        }
        if(res=="True")
            break;
    }
    cout << res;

    return 0;
}
