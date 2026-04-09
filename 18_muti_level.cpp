#include <iostream>
using namespace std;

class A // parent
{
public:
    int x;
};

class B : public A // child, inherited from A
{
public:
    string name;
};

class C : public B // child, inherited from B
{
public:
    int a;
};

int main()
{
    C c1; // Call the lowest in the inheritence tree (C)
          //                A
          //                |
          //                B
          //                |
          //                C

    return 0;
}