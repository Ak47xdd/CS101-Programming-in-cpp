#include <iostream>
using namespace std;

class Square
{
public:
    float s;

    void get();  // function prototype for get()
    void area(); // function prototype for area()
};

/* Scope resolution operator (::) is used to access member functions of a defined class outside its scope ({})*/

void Square ::get() // return_type_of_declared_func Classname :: func_name()
{
    cout << "Enter the side : ";
    cin >> s;
}

void Square ::area()
{
    cout << "Area : " << s * s << endl;
}

int main()
{
    Square s1;

    s1.get();
    s1.area();

    return 0;
}