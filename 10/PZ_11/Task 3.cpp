//Програмування алгоритмів з розгалуженням
//Завдання 3
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void) {
	const int lenght = 5;
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
	
	cout << "\nСортування масиву\n" ;
	
	for(int i = 1; i < lenght; i++){
	    for(int j = i; j > 0 && arr[j - 1] > arr[j]; j--){
	        swap(arr[j-1], arr[j]);
	        for (int i = 0; i < lenght; i++)
        	{
            	cout << arr[i] << " ";
            }
            cout << "\n";
	    }
	}
	
	cout << "Сортування масиву завершено\n" ;

	return 0;
}