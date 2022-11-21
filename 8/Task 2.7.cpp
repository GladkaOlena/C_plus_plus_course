//Завдання 2.7
#include <iostream>
#include <math.h>

using namespace std;

int main(void) {
    double pi4 = 0.;
    long n;

    cout << "Number of iterations? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        pi4 += ((pow(-1, i))) / (2 * i + 1);
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}