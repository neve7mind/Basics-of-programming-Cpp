//Мурашов Иван Вячеславович, НКАбд-04-23
/*42. Дана строка, состоящая из слов, набранных заглавными буквами и разделенных пробелами (одним или несколькими). 
Найти количество слов, которые начинаются и заканчиваются одной и той же буквой.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int k=0;
    for(int i=1; i<str.size(); i++)
    {
        if(str[i+1]==' ' && str[i-1]==' ' || str[i+1]=='0' && str[i-1]==' ' || str[i+1]==' ' && str[i-1]=='0' || str[i+1]=='0' && str[i-1]=='0')
            k++;
    }
    cout<<k;
    
    while(str[i]!=)
    
    return 0;
}
