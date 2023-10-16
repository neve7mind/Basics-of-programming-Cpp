//Мурашов Иван Вячеславович, НКАбд-04-23
/*3. Описать процедуру Mean(X, Y, AMean, GMean), вычисляющую среднее арифметическое AMean = (X + Y)/2 и среднее геометрическое 
GMean = sqrt(X ⋅ Y) двух положительных чисел X и Y (X и Y — входные, AMean и GMean — выходные параметры вещественного типа).
С помощью этой процедуры найти среднее арифметическое и среднее геометрическое для пар (A, B), (A, C), (A, D), если даны A, B, C, D.*/

#include <iostream>
#include <cmath>
using namespace std;

float AMean(float X, float Y)
{
    return (X + Y)/2;
}

float GMean(float X, float Y)
{
    return sqrt(X*Y);
}

int main()
{
	float A, B, C, D;
    	cin >> A >> B >> C >> D;
    	cout << AMean(A, B) << " " << GMean(A, B) <<  endl;
	cout << AMean(A, C) << " " << GMean(A, C) << endl;
	cout << AMean(A, D) << " " << GMean(A, D) << endl;

    return 0;
}
