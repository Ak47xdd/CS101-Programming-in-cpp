#include <iostream>
using namespace std;

class A
{
public:
    string name;
    string dept;

    A(string name, string dept) // Parameterized constructor w/ this pointer
    {
        this->name = name; //(this->var = var)
        this->dept = dept;
    }
    // or
    /*
    A(string n, string d) // Parameterized constructor with seperate variables
    {
        name = n;
        dept = d;
    }
    */
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Dept : " << dept << endl;
    }
};

int main()
{
    A a1("Akshay", "BCA"); // Call the object with obj_name(first_arg, second_arg)
    a1.display();

    return 0;
}