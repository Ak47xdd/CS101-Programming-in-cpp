#include <iostream>
using namespace std;

class A // parent
{
public:
    int x;
    A(int x)
    {
        this->x = x;
    }
};

class B : public A // child, inherited from A
{
public:
    string name;
    B(int x, string name) : A(x)
    {
        this->x = x;
        this->name = name;
    }
};

class C : public B // child, inherited from B
{
public:
    int a;
    C(int x, string name, int a) : B(x, name)
    {
        this->x = x;
        this->name = name;
        this->a = a;
    }
};

int main()
{
    C c1(10, "akshay", 1); // Call the lowest in the inheritence tree (C)
                           //                A
                           //                |
                           //                B
                           //                |
                           //                C

    return 0;
}