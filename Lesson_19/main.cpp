#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    int an_int = 0;
    float a_float = 0.0;
    double a_double = 0.0;

    cout << endl <<
        "Memory lego bricks, int:    " << sizeof(an_int) << endl <<
        "Memory lego bricks, float:  " << sizeof(a_float) << endl <<
        "Memory lego bricks, double: " << sizeof(a_double) << endl;

    cout.setf(ios::hex);
    cout.unsetf(ios::dec);
    cout << endl <<
        "int's address in memory is :    " << &an_int << endl <<
        "float's address in memory is :  " << &a_float << endl <<
        "double's address in memory is : " << &a_double << endl;


    return 0;
}