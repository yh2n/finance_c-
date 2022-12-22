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
        "int :    " << an_int << endl <<
        "float :  " << a_float << endl <<
        "double : " << a_double << endl;

    cout << endl <<
        "&int :    " << &an_int << endl <<
        "&float :  " << &a_float << endl <<
        "&double : " << &a_double << endl;

    // int* : variable pointing at int's address 
    int* p_int = &an_int;
    float* p_float = &a_float;
    double* p_double = &a_double;
    cout << endl <<
        "p_int's address in memory is:     " << p_int << endl <<
        "p_float's address in memory is:   " << p_float << endl <<
        "p_double's address in memory is:  " << p_double << endl;

    cout << endl <<
        "Sizeof, p_int:    " << sizeof(p_int) << endl <<
        "Sizeof, p_float:  " << sizeof(p_float) << endl <<
        "Sizeof, p_double: " << sizeof(p_double) << endl;

    cout << endl <<
        "&p_int's address in memory is:    " << &p_int << endl <<
        "&p_float's address in memory is:  " << &p_float << endl <<
        "&p_double's address in memory is: " << &p_double << endl;

    return 0;
}