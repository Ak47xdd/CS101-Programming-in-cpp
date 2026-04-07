#include <iostream>
using namespace std;

class Calc
{
public:
    void add(int x, int y) // base function, params : int x, int y
    {
        cout << x << " + " << y << " = " << x + y;
    }
    void add(int x, int y, int z) // overloaded function w/ three parameters, params : int x, int y, int z
    {
        cout << x << " + " << y << " + " << z << " = " << x + y;
    }
    int add(int x, int y, int z, int w) // overloaded w/ return type and four params, params : int x, int y, int z, int w
    {
        return x + y + z + w;
    }
};

int main()
{
    Calc c1;

    // order of calling the functions doesnt matter!
    c1.add(1, 2, 3);            // here the second function is called with 3 parameters
    c1.add(1, 2);               // here the first function is called with 2 parameters
    cout << c1.add(1, 2, 3, 4); // third function called with 4 parameters, use cout for functions that return a value
    // or call using :
    int res = c1.add(1, 2, 3, 4);
    cout << res << endl;

    return 0;
}