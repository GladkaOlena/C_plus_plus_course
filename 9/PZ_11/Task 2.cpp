//Організація одновимірних масивів
//Завдання 2
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void) {
	const int lenght = 12;
	int arr[lenght];

	for (int  i = 0; i < lenght; i++)
	{
		arr[i] = int(rand() % 100) + -(rand() % 100);
	}

	cout << "Масив, наповнений довільними(від -100 до 100) числами :\n";

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < lenght; i++)
	{
		if (arr[i] < 0) 
		{
			arr[i] = 0;
		}
	}

	cout << "Від'ємні числа замінені на 0\n";

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}