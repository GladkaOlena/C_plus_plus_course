//Програмування циклічних алгоритмів
//Завдання 3.5
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    int b;
    int h;

    cout << "Введіть число a" << "\n";
    cin >> a;
    cout << "Введіть число b" << "\n";
    cin >> b;
    cout << "Введіть число h" << "\n";
    cin >> h;

    for (int i = a; i <= b; i += h) {
        double x = i;
        double y;

        y = 8 + sqrt(x-7)/(x+5);

        cout << "-------------" << "\n";
        cout << " : " << " X " << " : " << " Y " << ":" << "\n";
        cout << "-------------" << "\n";
        cout << " :  " << a << "  : " << y << " : " << "\n";
        cout << "-------------" << "\n";


        while (y == 0)

            cout << "x не належить ОДЗ";
    }

    return 0;
}