#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 10;
    int z = 10;
    int w = 10;

    cout << x++ << endl; // 10, returns current value (post incriment)
    cout << y-- << endl; // 10, returns current value (post decriment)
    cout << ++z << endl; // 11, incriments current value and outputs that value (pre incriment)
    cout << --w << endl; // 9, decriments currnet value and outputs that value (pre decriment)

    return 0;
}