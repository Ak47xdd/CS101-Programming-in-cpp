#include <iostream>
using namespace std;

class Rectangle // by convention, start class names with capital letter
{
public:    // public members are accessed everywhere in the program
    int x; // member varuiable

protected: // protected members are accesed only in the same class or other class only once and cant be accessed in main function
    int y; // member variable

private:   // private members are only accessed in the class its implimented
    int z; // member variable

public:
    void disp() // member function
    {
        cout << "This is a member function of the class Rectangle!";
    }

}; // close the class with a semicolon (;)

int main()
{
    Rectangle R1; // 'Rectangle R1' is the instance and 'R1' is the object

    // use the dot operator (.) to call members of the class in main function

    R1.x = 10; // accessible since its public, called with the dot operator
    // R1.y = 20; // Not accessible since its protected
    // R1.z = 30; // Not accessible since its private
    R1.disp();

    return 0;
}