#include <iostream>
using namespace std;

class A
{
private:
    int x;

    friend void display(A obj); // freind function declaration
};

void display(A obj) // freind function initialization (return_type fun_name(Class_name obj))
{
    cout << "Value of x : " << obj.x << endl;
}

int main()
{
    A a1;
    display(a1); // assign a permanent object as an argument

    return 0;
}