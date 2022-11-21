//Організація двовимірних(багатовимірних) масивів
//Завдання 1
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int m = 4;
    int n = 3;
    int mas[m][n] = {
                        {1, 2, 3},
                        {4, 4, 4},
                        {6, 7, 8},
                        {9, 10, 11},
                    };
    int k = 0;
    for(int i = 0; i < m; ++i){
        k = 0;
        for(int j = 0; j < n; ++j)
        if(mas[i][j] % 2 == 0)
        k++;
        cout << "for " << i+1 << " k = " << k << endl;
    }
    
    return 0;
}