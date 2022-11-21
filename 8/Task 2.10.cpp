#include <iostream>

using namespace std;

int main(void) {
	int size;

	cin >> size;

	if (size > 0 && size < 100) {
		cout << '+';
		for (int i = 0; i < size; i++)
			cout << '-';
		cout << '+' << endl;
		for (int i = 0; i < size; i++) {
			cout << '|';
			for (int j = 0; j < size; j++)
				cout << ' ';
			cout << '|' << endl;
		}
		cout << '+';
		for (int i = 0; i < size; i++)
			cout << '-';
		cout << '+' << endl;
	}
	else
	{
		cout << "Sorry, the side size is too big";
	}

	return 0;
}