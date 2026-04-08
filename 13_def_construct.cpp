#include <iostream>
using namespace std;

class A
{
public:
    string name;
    string dept;

public:
    A() // Default constructor, the value cannot be changed once initialized (Class_name(){})
    {
        name = "Akshay";
        dept = "BCA";
    }
};

int main()
{
    A a1;

    cout << "Name : " << a1.name << endl; // "Akshay" is the output
    cout << "Dept : " << a1.dept << endl; // "BCA" is the output

    return 0;
}