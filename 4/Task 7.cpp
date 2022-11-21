#include <iostream>

using namespace std;

int main()
{
    float a = 2.3;
    float b = 2.3;
    float c = 2.123456;
    float d = 2.123456;
    float e = 2.123456;

    printf("%.1f\n", a);
    printf("%.2f\n", b);
    printf("%f\n", c);
    printf("%.2f\n", d);
    printf("%.f\n", e);

    return 0;
}