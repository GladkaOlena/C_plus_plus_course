//����������� ������ 1. �������� ��������� � ������ ����������
//������� 10
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
	cout << "������� ����� 10: " << y;

	return 0;
}