#include <iostream>
using namespace std;

class New
{
public:
    void print_value(int val);
};

void New ::print_value(int val)
{
    cout << "Value = " << val << endl;
}

int main()
{
    New N[5]; // array of objects

    for (int i = 1; i < 5; i++)
    {
        N[i].print_value(2 * i);
        /*
            first iteration :
            i = 1,
            1 * 2 = 2
            second iteration :
            i = 2,
            2 * 2 = 4
            third iteration :
            i = 3,
            3 * 2 = 6
            fourth iteration :
            i = 4,
            4 * 2 = 8
        */
    }
    cout << endl;

    return 0;
}