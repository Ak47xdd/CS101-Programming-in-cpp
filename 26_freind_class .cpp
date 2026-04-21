#include <iostream>
using namespace std;

class Base
{
private:
    int age;
    string name;

public:
    friend class Derived;
};

class Derived
{
public:
    void display(Base obj)
    {
        cout << "Name : " << obj.name << endl;
        cout << "Age : " << obj.age << endl;
    }
};

int main()
{
    Base B1;
    Derived D1;

    D1.display(B1);

    return 0;
}