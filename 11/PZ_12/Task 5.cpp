//Організація двовимірних(багатовимірних) масивів
//Завдання 5
#include <climits> //for int max
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int m = 3;
    int n = 4;
    int mas[m][n] = {
                        {1, 2, 3, 4},
                        {4, 10, 5, 6},
                        {6, 7, 8, 9},

    };
    int max = INT_MAX;

    for (int i = 0; i < m; i++) {
        cout << '\n';
        for (int j = 0; j < n; j++)
            cout << mas[i][j] << " ";
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            if (mas[i][j] > max)
                max = mas[i][j];
    }

    cout << "\nmax " << max;

    return 0;
}
