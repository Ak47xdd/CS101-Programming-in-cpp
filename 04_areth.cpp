#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;

    x + y; // 10 + 20 = 30
    x - y; // 10 - 20 = -10
    x *y;  // 10 * 20 = 200
    x / y; // 10 / 20 = 0 since returned value is int, if float then 0.5
    x % y; // 10 % 20 = 10, remainder

    return 0;
}