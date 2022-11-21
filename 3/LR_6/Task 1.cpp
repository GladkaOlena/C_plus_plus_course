//Програмування алгоритмів з розгалуженням. Перше завдання
//Завдання 1.5
#include <iostream>

using namespace std;

int main() {
    int number;
    int count = 0;
    int a;
    int b;
    int c;

    //Розкладення на цифри
    cout << "Введіть трьохцифрове число : ";
    cin >> number;
    a = number / 100;
    b = number / 10 % 10;
    c = number % 10;

    cout << "Перше число " << a << "\n";
    cout << "Друге число " << b << "\n";
    cout << "Третє число " << c << "\n";

    //Перевірка на наявність числа 7. Сума цих чисел
    if (a < 7) {
        count = a + count;
    }
    if (b < 7) {
        count = b + count;
    }
    if (c < 7) {
        count = c + count;
    }
    
    //Якщо чисел менших за 7 немає
    if(count != 0){
        cout << "\nСума чисел, що менші за 7 : " << count;
    }
    else{
        cout << "\nСума чисел, що менші за 7 відсутні ";
    }


    return 0;
}