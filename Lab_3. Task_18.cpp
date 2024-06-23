
// 18. Составить программу, которая по введенному номеру выводит фамилию студента вашей группы.

#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "RU");
    unsigned int num;
    do {
        cin >> num;
        switch (num) {
            case 1:
                cout << "Зоригоо";
                break;
            case 2:
                cout << "Махмудинов";
                break;
            case 3:
                cout << "Махсумкулова";
                break;
            case 4:
                cout << "Машков";
                break;
            case 5:
                cout << "Мелкумян";
                break;
            case 6:
                cout << "Можахид";
                break;
            case 7:
                cout << "Монхжаргал";
                break;
            case 8:
                cout << "Мурашов";
                break;
            case 9:
                cout << "Мягмар";
                break;
            case 10:
                cout << "Наговицын ";
                break;
            case 11:
                cout << "Назармамадов ";
                break;
            case 12:
                cout << "Намруев ";
                break;
            case 13:
                cout << "Нджову ";
                break;
            case 14:
                cout << "Нечаева";
                break;
            case 15:
                cout << "Новиков";
                break;
            case 16:
                cout << "Ногейра де Моура";
                break;
            case 17:
                cout << "Норбутаев";
                break;
            case 18:
                cout << "Нуруллаев ";
                break;
            case 19:
                cout << "Осина";
                break;
            case 20:
                cout << "Павлюченков ";
                break;
            case 21:
                cout << "Пакавира";
                break;
            case 22:
                cout << "Палкина";
                break;
            case 23:
                cout << "Перегудов";
                break;
            case 24:
                cout << "Пестова";
                break;
            case 25:
                cout << "Шакиров";
                break;
            case 26:
                cout << "Зиани ";
                break;
            case 27:
                cout << "Моребисе ";
                break;
            case 28:
                cout << "Кантоз ";
                break;
            default:
                cout << "Введенное значение отсутствует в базе данных\n";
                break;
        }
    }
    while (num >= 29);

    return 0;
}
