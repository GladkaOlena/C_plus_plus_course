//������������� �������� ���������
//�������� 5
#include <iostream>

using namespace std;

int main(void) {
	int number;
	int tagnum = 1;
	int cnumber = 1;
	int a = 10;
	int count = 1;

	cin >> number;
	cout << "�����\t" << "̳���\n";

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
		cout << "������� ��� ���� ����, �� ��������� 9 : " << tagnum;
	}
	else {
		cout << "���� ����� 9";
	}

	return 0;
}