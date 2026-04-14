#include <iostream>
using namespace std;

class A // base class
{
public:
    int x;

protected:
    int y;

private:
    int z;

public:
    void display()
    {
        cout << "Value of x : " << x << endl;
        cout << "Value of y : " << y << endl;
        cout << "Value of z : " << z << endl;
    }
};

class B : public A // derived class
{
    void disp()
    {
        cout << "Value of x : " << x << endl;
        cout << "Value of y : " << y << endl;
        // cout << "Value of z : " << z << endl; (ERROR)
    }
};

class C : public B
{
    void disp_2()
    {
        // cout << "Value of y : " << y << endl; (ERROR)
        //  cout << "Value of z : " << z << endl; (ERROR)
    }
};

A a1;
B b1; // global instance

void func()
{
    cout << "Value of x : " << b1.x << endl;
}

int main()
{
    cout << "Value of x : " << b1.x << endl;
    cout << "Value of x : " << a1.x << endl;
    // cout << "Value of z : " << a1.z << endl; (ERROR)
    func();

    return 0;
}