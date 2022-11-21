//Організація двовимірних(багатовимірних) масивів
//Завдання 6
#include <climits> //for int min
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int m = 4;
    int n = 7;
    int mas[m][n] = {
                        {1, 2, 3, 4, 5, 8, 12, 32},
                        {4, 10, 5, 6, 23 , 63, 21},
                        {6, 7, 8, 9, 3, 0 ,12 ,34},
                        {6, 7, 8, 9, 93 ,12 ,43, 17},

    };
    int min = INT_MAX;

    for (int i = 0; i < m; i++) {
        cout << '\n';
        for (int j = 0; j < n; j++)
            cout << mas[i][j] << " ";
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            if (mas[i][j] < min)
                min = mas[i][j];
    }

    cout << "\nmin " << min;

    return 0;
}
