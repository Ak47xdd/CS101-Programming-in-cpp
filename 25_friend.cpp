#include <iostream>
using namespace std;

class A
{
private:
    int x;

    friend void display(A obj);
};

void display(A obj)
{
    cout << "Value of x : " << obj.x << endl;
}

int main()
{
    A a1;
    display(a1);

    return 0;
}