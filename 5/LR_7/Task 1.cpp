//Програмування циклічних алгоритмів
//Завдання 1
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++) {

        float x;
        float y;

        cin >> x;

        y = pow(sin(x), 5) - fabs(5 * x - 1.5);

        cout << y << "\n";
    }

    return 0;
}