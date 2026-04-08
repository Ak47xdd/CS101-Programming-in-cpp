#include <iostream>
using namespace std;

class Student
{
public:
    int x;

    ~Student() // destructor must be declared with a tilde(~) [~Class_name(){}]
    {
        cout << "this is a destructor" << endl;
    }
};

int main()
{
    Student S1; // destructors are called when an object is initialized

    return 0;
}