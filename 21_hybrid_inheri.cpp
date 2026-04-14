#include <iostream>
using namespace std;

class A
{
public:
    int x;
};

class B : public A
{
public:
    int y;
};

class C : public A
{
public:
    int z;
};

class D : public B
{
public:
    string a;
};

class E : public C
{
public:
    string b;
};

class F : public E
{
public:
    string c;
};

//                                              A
//                                          B       C
//                                          |       |
//                                          C       D
//                                                  |
//                                                  E
//                                                  |
//                                                  F