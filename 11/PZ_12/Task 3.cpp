//Організація двовимірних(багатовимірних) масивів
//Завдання 3
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int m = 5;
    int n = 7;
    int mas[m][n] = {
                        {1, 2, 3, 4, 5, 8, 9,},
                        {4, 5, 5, 6, 7, 9, 10,},
                        {6, 7, 8, 9, 10, 6, 11,},
                        {9, 10, 11, 18, 19, 20, 25},
                        {12, 13, 15, 16, 18, 25, 32},

    };
    int k = 0;
    for (int i = 0; i < m; ++i) {
        k = 0;
        for (int j = 0; j < n; ++j)
            k += mas[i][j];
        cout << "for " << i + 1 << " k = " << k << endl;
    }

    return 0;
}
