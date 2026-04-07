#include <iostream>
using namespace std;

class A
{
public:
    string name;
    string dept;

public:
    A()
    {
        name = "Akshay";
        dept = "BCA";
    }
};

int main()
{
    A a1;

    cout << "Name : " << a1.name << endl;
    cout << "Dept : " << a1.dept << endl;

    return 0;
}