#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;
    // = 10 + 10i
    // = 7 + 2i
    // = 17 + 12i

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }
};

int main()
{
    Complex C1(10, 10);
    Complex C2(7, 2);
    Complex C3;

    C3 = C1 + C2;

    C3.display();

    return 0;
}