#include <iostream>
using namespace std;

class A // parent
{
public:
    int age;
};

class B : public A // child, inherited from A
{
public:
    int a;
};

class C : public A // child, inherited from A
{
public:
    int c;
};

class D : public B // child, inherited from B
{
public:
    int d;
};

class E : public C // child, inherited from C
{
public:
    int e;
};

int main()
{         //                                 A
    E e1; //                              B     C
    D d1; // (Calling D gets B and C)   D         E   (Calling E gets C and A)

    return 0;
}