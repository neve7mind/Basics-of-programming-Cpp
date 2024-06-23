
/*16. Дано натуральное число n (1<=n<=1188), определяющее возраст человека (в месяцах). 
Выразить возраст в годах и месяцах, например, 22 год 10 месяцев, 52 года 1 месяц, 46 лет ровно и т.д.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale (LC_ALL, "RU");
    unsigned int n;
    do {
        cin >> n;
        if (n >= 1 && n <= 1188) {
            unsigned int y = n/12;
            cout << y;
            if (y%100 >= 11 && y%100 <= 19)
                cout << " лет ";
            else {
                switch (y%10) {
                    case 0:
                        cout << " лет ";
                        break;
                    case 1:
                        cout << " год ";
                        break;
                    case 2 ... 4:
                        cout << " года ";
                        break;
                    case 5 ... 9:
                        cout << " лет ";
                        break;
                }
            }
            unsigned int m = n%12;
            if (m%100 == 11)
                cout << m << " месяцев";
            else {
                switch (m%10) {
                    case 0:
                        cout << "ровно";
                        break;
                    case 1:
                        cout << m << " месяц";
                        break;
                    case 2 ... 4:
                        cout << m << " месяца";
                        break;
                    case 5 ... 9:
                        cout << m << " месяцев";
                        break;
                }
            }
        }
        else {
            cout << "Люди столько не живут\n";
        }
    }
    while (n >= 1188);
    return 0;
}
