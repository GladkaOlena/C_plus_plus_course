#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;

    cin >> a;
    cin >> b;

    if (a == b)
        cout << "Results are equal (by 0.000001 epsilon)";
    else
        cout << "Results are not equal (by 0.000001 epsilon)";

    return 0;
}