
/* 7. Напишите программу, которая запрашивает у пользователя число и выводит на экран все его делители. */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout<<"Введите число: ";
    cin>>n;
    cout<<"Делители числа "<<n<<": ";
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            cout<<i<<" ";
    }

    return 0;
}
