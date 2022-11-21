//Організація двовимірних(багатовимірних) масивів
//Завдання 4
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int m = 4;
    int n = 6;
    int mas[m][n] = {
                        {1, 2, 3, 4, 5, 8},
                        {4, 5, 5, 6, 7, 9},
                        {6, 7, 8, 9, 10, 6},
                        {9, 10, 11, 18, 19, 20},

    };
    int k = 0;
    for (int i = 0; i < n; ++i) {
        k = 0;
        for (int j = 0; j < m; ++j)
            k += mas[j][i];
        cout << "for " << i + 1 << " k = " << k << endl;
    }

    return 0;
}
