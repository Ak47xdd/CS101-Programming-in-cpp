#include <iostream>
using namespace std;

class A // parent
{
public:
    int age;
    string name;
    A(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class B : public A // child, class A is inherited by class B ( : access_specifier Class_name_of_inheriting{})
{
public:
    string likes;
    int fav_no;
    B(string name, int age, string likes, int fav_no) : A(name, age)
    {
        this->likes = likes;
        this->fav_no = fav_no;
    }
};

int main()
{
    B b1("akshay", 20, "football", 12);

    cout << "Name: " << b1.name << endl;
    cout << "Age: " << b1.age << endl;
    cout << "Likes: " << b1.likes << endl;
    cout << "Fav no: " << b1.fav_no << endl;

    // Demonstrates single inheritance: B inherits age and name from A

    return 0;
}