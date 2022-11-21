//Програмування циклічних алгоритмів
//Завдання 2.5
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    for (int a = 10; a <= 20; a++) {
        float b;
        b += sqrt(a);

        cout << b << "\n";
    }

    return 0;
}