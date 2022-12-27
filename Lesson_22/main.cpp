#include <iostream>

using namespace std;

int fDirNumDub(int input_int) {
    cout << "Address of input_int: " << &input_int << endl;
    input_int *= 2;
    return input_int;
}

// not returning an int but doubling the alias at the address
void fRefNumDub(int& input_int) {
    input_int *=2;
    cout << "Address of input_int: " << &input_int << endl;
}

void fDirPoint_int(int* input_pointer) {
    *input_pointer *=2;
}

int main(int arg, char * argv[]) {

    ////////////////////

    int dir_int {10};
    cout << endl << "Before => dir int: " << dir_int << endl;
    // Addresses are different
    cout << "Address of dir_int: " << &dir_int << endl;

    dir_int = fDirNumDub(dir_int);
    cout << "After => dir int: " << dir_int << endl;

    ////////////////////

    int ref_int {33};
    cout << endl << "Before => ref int: " << ref_int << endl;
    // Addresses are the same
    cout << "Address of ref_int: " << &ref_int << endl;

    fRefNumDub(ref_int);
    cout << "After => ref int: " << ref_int << endl;

    /////////////////////////////

    int dir_point_int = 42;
    cout << endl << "Before => dir point int " << dir_point_int << endl;

    // Create a pointer key
    int* pDir_point_int = &dir_point_int;

    // Takes copy of a key and double what's at the address
    fDirPoint_int(pDir_point_int);
    cout <<  "After => dir point int " << dir_point_int << endl;

    ////////////////////////////

    int in_dir_point_int = 69;
    cout << endl << "Before => indir point int " << in_dir_point_int << endl;

    // We send the address directly
    fDirPoint_int(&in_dir_point_int);
    cout <<  "After => indir point int " << in_dir_point_int << endl;

    return 0;
}