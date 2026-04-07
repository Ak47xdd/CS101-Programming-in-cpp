#include <iostream>
using namespace std;

class A // base class. parent
{
public:
    virtual void func()
    {
        cout << "virtual func";
    }
};

class B : public A // child class
{
public:
    void func()
    {
        cout << "overriden func";
    }
};

int main()
{
    A *a1;
    B b1;

    a1 = &b1;
    a1->func();

    return 0;
}