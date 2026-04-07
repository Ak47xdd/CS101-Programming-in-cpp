#include <iostream>
using namespace std;

class A // base class, parent
{
public:
    virtual void func() // define any function that needs to be overriden with the 'virtual' keyword
    {
        cout << "virtual func";
    }
};

class B : public A // subclass, child, ' : access_specifier Class_name' is a must since the class is inherited from base class
{
public:
    void func() // function overriden here with new code, use the same return_type and func_name
    {
        cout << "overriden func";
    }
};

int main()
{
    A *a1; // parent class called with a pointer to its object (Parent *parent_obj_name;)
    B b1;  // child class called with its object (Child child_obj_name;)

    a1 = &b1; // parent pointer object assigned to its dereferenced child object (parent_obj_name = & child_obj_name;)

    a1->func(); // calling the function in child with reference to its parent pointer object (parent_obj_name -> func_name();)
    cout << endl;
    b1.func(); // this also works!

    return 0;
}