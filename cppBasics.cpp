#include <iostream>
using namespace std;

/*
===============================
        C++ DATA TYPES NOTE
===============================

1. Basic Data Types
-------------------
int         -> Integer numbers (e.g., 10, -5)
float       -> Decimal numbers (less precision)
double      -> Decimal numbers (more precision)
char        -> Single character ('A', 'b')
bool        -> true or false
string      -> Sequence of characters ("Hello")

2. Type Modifiers
-------------------
short       -> Smaller integer
long        -> Larger integer
long long   -> Very large integer
unsigned    -> Only positive values

3. Size (depends on system but usually):
----------------------------------------
int         -> 4 bytes
float       -> 4 bytes
double      -> 8 bytes
char        -> 1 byte
bool        -> 1 byte
long long   -> 8 bytes
*/

int main() {

    // Basic Data Types Examples
    int age = 20;
    float temperature = 36.5;
    double pi = 3.1415926535;
    char grade = 'A';
    bool isPassed = true;
    string name = "John";

    // Type Modifiers
    short smallNumber = 100;
    long bigNumber = 1000000;
    long long veryBigNumber = 10000000000;
    unsigned int positiveNumber = 50;

    cout << "===== C++ Data Types Example =====" << endl;
    cout << "int: " << age << endl;
    cout << "float: " << temperature << endl;
    cout << "double: " << pi << endl;
    cout << "char: " << grade << endl;
    cout << "bool: " << isPassed << endl;
    cout << "string: " << name << endl;

    cout << "\n===== Sizes in Bytes =====" << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of bool: " << sizeof(bool) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;

    return 0;
}