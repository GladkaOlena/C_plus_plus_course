//Програмування алгоритмів з розгалуженням
//Завдання 4
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void) {
	const int lenght = 7;
	int arr[lenght];
	int A;
	
	cout << "Введіть із клавіатури число A : ";
	cin >> A;

	for (int  i = 0; i < lenght; i++)
	{
		arr[i] = int(rand() / A);
	}

	cout << "Масив, наповнений довільними(від 0 до " << A << ") числами :\n";

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}
}