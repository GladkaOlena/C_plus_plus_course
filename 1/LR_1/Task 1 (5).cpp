//Лабораторна робота 1. Розробка алгоритмів з лінійною структурою
//Приклад 10
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	int a = 3;
	float b = 0.151;
	float y;

	y = 1 - pow(cos(b / a) * M_PI, 2) / 0.5 * exp(b) + 0.312 * exp(a);
	cout << "Приклад номер 5: " << y;

	return 0;
}
