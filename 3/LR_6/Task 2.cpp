//Програмування алгоритмів з розгалуженням. Друге завдання
//Завдання 2.5
#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;

    cout << "Введіть номер дня тиждня(від 1 до 7) : ";
    cin >> number;

    switch (number) {
    case 1: cout << "Monday - Понеділок"; break;
    case 2: cout << "Tuesday - Вівторок"; break;
    case 3: cout << "Wednesday - Середа"; break;
    case 4: cout << "Thursday - Четвер"; break;
    case 5: cout << "Friday - П'ятниця"; break;
    case 6: cout << "Saturday - Субота"; break;
    case 7: cout << "Sunday - Неділя"; break;
    default: cout << "Дня тиждня за номером " << number << " неіснує((("; break;
    }

    return 0;
}