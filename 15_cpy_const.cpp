#include <iostream>
using namespace std;

class A
{
public:
    int a;

    A() // before a copy constructor, a default constructor must be initialized
    {
        cout << "this is a constructor" << endl;
    }
    A(const A &b) // Copy constructor, Class_name(const Class_name & variable_to_be_copied_into){}
    {
        a = b.a; // assigning a copy (var = variable_to_be_copied_into.var;)
    }
};

int main()
{
    A a1; // callling the object to be copied (Class_name obj_1;)

    a1.a = 10;

    A a2(a1); // copying a1 to a2 (Class_name obj_2(obj_1);)

    cout << a1.a << endl; // output : 10
    cout << a2.a << endl; // output : 10 (copied from a1)

    return 0;
}