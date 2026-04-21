#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;

public:
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    Distance operator-()
    {
        return Distance(-feet, -inches);
    }
    void display()
    {
        cout << "Feet : " << feet << endl;
        cout << "Inches : " << inches << endl;
    }
};

int main()
{
    Distance D(20, 30);
    -D;

    D.display();

    return 0;
}