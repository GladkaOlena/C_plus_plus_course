//Розробка алгоритмів з розгалуженою структурою. Перше завдання
//П'ятий приклад
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x;
    float Y;

    cin >> x;

    if (x >= 0) {
        Y = exp(-x) * tg(1 / x + 3, 2);
    }
    else if (x < 0)
    {
        Y = x * 0.32 * x + 2.5 / pow(x, 2) + 3;
    }

    cout << Y;

    return(0);
}