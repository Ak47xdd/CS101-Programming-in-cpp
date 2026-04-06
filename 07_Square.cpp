#include <iostream>
using namespace std;

class Square
{
public:
    float s;

    void get()
    {
        cout << "Enter the side of the square : ";
        cin >> s;
    }
    float area() // function with return type
    {
        return s * s; // returns only the value of s * s
    }
    float perimeter()
    {
        return 4 * s;
    }
};

int main()
{
    Square S1;

    S1.get();
    cout << "Area of square : " << S1.area() << endl;
    cout << "Perimeter of square :" << S1.perimeter() << endl;

    return 0;
}