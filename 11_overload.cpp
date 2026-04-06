#include <iostream>
using namespace std;

class Calc
{
public:
    void add(int x, int y) // base function
    {
        cout << x << " + " << y << " = " << x + y;
    }
    void add(int x, int y, int z) // overloaded function w/ three parameters
    {
        cout << x << " + " << y << " + " << z << " = " << x + y;
    }
    int add(int x, int y, int z, int w) // overloaded w/ return type and four params
    {
        return x + y + z + w;
    }
};

int main()
{
    Calc c1;

    c1.add(1, 2);
    c1.add(1, 2, 3);
    cout << c1.add(1, 2, 3, 4); // use cout for functions that return a value

    return 0;
}