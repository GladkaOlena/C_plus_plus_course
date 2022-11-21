//Лабораторна робота 1. Розробка алгоритмів з лінійною структурою
//Приклад 5
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	int a = 2;
	float b = 12.11;
	float y;

	y = 0.5 * (log(a) + log(b)) / pow(abs(cos(pow(a + b, 2))) * M_PI / 6, 1. / 3);
	cout << "Приклад номер 5: " << y;

	return 0;
}
