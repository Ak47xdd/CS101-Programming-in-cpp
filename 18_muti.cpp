#include <iostream>
using namespace std;

class A // parent
{
public:
    int salary;
};

class B : public A // child, inherited from class A
{
public:
    string name;
};

class C : public A, public B // child, inheriting from A and B
{
public:
    string game;
};

class D : public A, public B, public C // child, inheriting from A, B and C
{
public:
    int adi_cout;
};

int main()
{
    D d1; // call the class that has inherited from all classes, class D

    return 0;
}