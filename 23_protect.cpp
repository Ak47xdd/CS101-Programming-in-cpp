#include <iostream>
using namespace std;

class A
{
public: // -> protected
    int x;

protected: // -> protected
    int y;

private: // -> private
    int z;
};

class B : protected A
{
public:
    void display()
    {
        cout << "Value of x : " << x << endl;
        cout << "Value of y : " << y << endl;
        // cout<<"Value of z : "<<z<<endl;
    }
};

class C : protected B
{
public:
    void disp()
    {
        cout << "Value of x : " << x << endl;
        cout << "Value of y : " << y << endl;
    }
};

C c1;

void func()
{
    c1.disp();
}

int main()
{
    // cout<<"Value of x : "<<c1.x<<endl;
    // cout<<"Value of y : "<<c1.y<<endl;
    func();

    return 0;
}