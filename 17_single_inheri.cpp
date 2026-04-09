#include <iostream>
using namespace std;

class A // parent
{
public:
    int x;
};

class B : public A // child, class A is inherited by class B ( : access_specifier Class_name_of_inheriting{})
{
public:
    string name;
};

int main()
{
    B b1; // call the inherited class (B)s
          //            A
          //            |
          //            B (Call this class!)
    return 0;
}