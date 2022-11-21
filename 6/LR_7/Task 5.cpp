//Програмування циклічних алгоритмів
//Завдання 5
#include <iostream>

using namespace std;

int main(void) {
	int number;
	int tagnum = 1;
	int cnumber = 1;
	int a = 10;
	int count = 1;

	cin >> number;
	cout << "Число\t" << "Місце\n";

	cout << number % a;
	cout << '\t' << cnumber;
	cout << '\n';

	while (cnumber != 0)
	{

		cout << number / a % 10;
		count++;
		cout << '\t' << count;
		a *= 10;
		cout << '\n';

		if ((number / a % 10) == 9)
		{
			tagnum = tagnum * 9;
		}

		cnumber = number / a;
	}

	if (tagnum != 1) {
		cout << "Добуток усіх його цифр, які дорівнюють 9 : " << tagnum;
	}
	else {
		cout << "Немає числа 9";
	}

	return 0;
}
