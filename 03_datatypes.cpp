#include <iostream>
using namespace std;

int main()
{
    // integers
    int x;       // 4 bytes : -1234 to 1234
    long int x;  // 8 bytes : -12345678 to 12345678
    long long x; // 12 bytes : -123456789123 to 123456789123

    // decimals
    float y;  // 4 bytes : -1234.1234 to 1234.1234
    double y; // 8 bytes : -12345678.12345678 to 12345678.12345678

    // char
    char arr[] = "akshay";  // char without size, bytes depend on the size of the string stored. 1 charater = 1 byte
    char arr[7] = "akshay"; // char with size, bytes are fixed (only 7 bytes/charaters can be stored)
    char *arr = "akshay";   // char pointer(certified kazhiveriyude mwone), not recommended but can store any number of charaters in "memory"

    // boolean
    bool b; // store true/false or 1 or 0

    return 0;
}