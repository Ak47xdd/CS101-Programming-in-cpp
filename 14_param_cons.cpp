#include <iostream>
using namespace std;

class A
{
public:
    string name;
    string dept;

    A(string n, string d)
    {
        name = n;
        dept = d;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Dept : " << dept << endl;
    }
};

int main()
{
    A a1("Akshay", "BCA");
    a1.display();

    return 0;
}