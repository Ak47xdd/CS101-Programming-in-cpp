#include <iostream>
using namespace std;

class Test
{
private:
    int x;

public:
    virtual void display() = 0;

    friend class A;
};

class A : public Test
{
public:
    void display()
    {
        cout << "Value of x : " << x << endl;
    }
};

int main()
{
    A a1;

    a1.display();

    return 0;
}