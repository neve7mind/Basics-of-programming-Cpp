
/* 38. Написать программу, которая по порядковому (атомному) номеру щелочного металла (Li, Na, K, Rd, Cs) 
в Периодической системе химических элементов Д.И. Менделеева, выводит цвет пламени этого металла. */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned int n;
    cout<<"Введите порядковый (атомный) номер щелочного металла: ";
    cin>>n;
    
    switch(n) 
    {
        case 3:
            cout<<"малиново-красный";
            break;
        case 11:
            cout<<"жёлтый";
            break;
        case 19:
            cout<<"фиолетовый";
            break;
        case 37:
            cout<<"красно-фиолетовый";
            break;
        case 55:
            cout<<"розово-фиолетовый";
            break;
        default:
            cout<<"цвет не определен";
    }

    return 0;
}
