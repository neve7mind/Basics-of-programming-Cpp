
// 48. Даны три вещественных числа. Возвести в квадрат те из них, значения которых неотрицательны.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	float a, b, c;
	cout << "Введите три вещественных числа: ";
	cin >> a >> b >> c;
	if (a >= 0) {
		cout << a * a << " ";
	}
	if (b >= 0) {
		cout << b * b << " ";
	}
	if (c >= 0) {
		cout << c * c;
	}
	return 0;
}
