//Організація двовимірних(багатовимірних) масивів
//Завдання 2
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int m = 6;
    int n = 4;
    int mas[m][n] = {
                        {1, 2, 3, 4},
                        {4, 5, 5, 6},
                        {6, 7, 8, 9},
                        {9, 10, 11, 18},
                        {12, 13, 15, 16},
                        {20, 24, 25, 30},
    };
    int k = 0;
    for (int i = 0; i < n; ++i) {
        k = 0;
        for (int j = 0; j < m; ++j)
            if (mas[j][i] % 2 == 0)
                k++;
        cout << "for " << i + 1 << " k = " << k << endl;
    }

    return 0;
}