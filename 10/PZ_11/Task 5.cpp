//������������� ��������� � �������������
//�������� 5
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void) {
	const int lenght = 7;
	int arr[lenght];

	for (int i = 0; i < lenght; i++)
	{
		arr[i] = int(rand() % 100);
	}

	cout << "�����, ���������� ��������� (�� 0 �� 100) ������� :\n";

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}

	sort(arr, arr + lenght);

	cout << "\n������ �� ������� ������� ������ : " << arr[lenght - 2];

}