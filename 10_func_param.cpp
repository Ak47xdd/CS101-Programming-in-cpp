#include <iostream>
using namespace std;

class Calc
{
public:
    void add(int x, int y) // parameters : x and y
    {
        cout << x << " + " << y << " = " << x + y;
    }
};

int main()
{
    Calc c1;

    c1.add(10, 20); // arugments : x = 10, y = 20

    return 0;
}