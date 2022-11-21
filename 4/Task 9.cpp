#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    if (a, b, c, d <= 255)
        cout << a << "." << b << "." << c << "." << d;
    else
        cout << "Incorrect ip";

    return 0;
}