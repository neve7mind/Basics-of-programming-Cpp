
//12. Даны три числа. Вывести вначале меньшее, а затем меньшее из оставшихся.

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	cout << "Программа, выводящая сначала меньшее, а затем меньшее из оставшихся чисел\n";
	float a, b, c;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите третье число: ";
	cin >> c;
	if (a <= b) {
		if (a <= c) {
			cout << a << " ";
			if (b <= c) {
				cout << b;
			}
			else
				cout << c;
		}
		else
			cout << c << " " << b;
	}
	else if (b <= a) {
		if (b <= c) {
			cout << b << " ";
			if (a <= c) {
				cout << a;
			}
			else
				cout << c;
		}
		else
			cout << c << " " << a;
	}

	return 0;
}
//не все случаи обрабатываются верно. пример - a=6, b=9, c=3
