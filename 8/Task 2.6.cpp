//Задача 2.6
#include <iostream>

using namespace std;

int main()
{
    int num;
    int count = 0;

    cin >> num;

    while (num != 1) {

        if (num > 0 && (num % 2) == 0) {
            num = num / 2;
            cout << num << "\n";
            count++;
        }
        else if (num > 0 && (num) != 0) {
            num = num * 3 + 1;
            cout << num << "\n";
            count++;
        }
    }

    cout << "steps = " << count;

    return 0;
}