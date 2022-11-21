#include <iostream>

using namespace std;

int main(void)
{
    bool answer;
    int value;

    cout << "Enter a value: ";
    cin >> value;

    if ((0 <= value && 10 > value)
        || (value * 2 <= 20 && value - 2 > -2)
        || (value - 1 < 1 && value / 2 < 10)
        || (value == 111)) {
        answer = true;
    }
    else
        answer = false;

    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
    return 0;
}