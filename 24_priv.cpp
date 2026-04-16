#include <iostream>
using namespace std;

class A
{
public: // -> private
    int x;

protected: // -> private
    int y;

private: // -> same, private
    int z;

public: // -> private
    void disp_z()
    {
        cout << "Value of z : " << z << endl;
    }
};

class B : private A
{
public:
    void display()
    {
        cout << "Value of x : " << x << endl;
        cout << "Value of y : " << y << endl;
        // cout<<"Value of z : "<<z<<endl;
    }
};

class C : private B
{
public:
    void disp()
    {
        // cout<<"Value of x : "<<x<<endl;
        // cout<<"Value of y : "<<y<<endl;
    }
};

B b1;
A a1;

void func()
{
    b1.display();
    a1.disp_z();
}

int main()
{

    // cout<<"Value of x : "<<b1.x<<endl;
    // cout<<"Value of y : "<<b1.y<<endl;
    func();

    return 0;
}