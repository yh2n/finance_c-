#include <iostream>

using namespace std;

void print_out_name(char input_string[]) {
    for(int i = 0; input_string[i] != '\0'; ++i) {
        cout << input_string[i];
    }
    cout << endl;
}

void print_out_name(string input_string) {
    cout << input_string << endl;
}

int main() {
    const int kSizeFive = 5;
    const int kSizeFour = 4;

    int aInt1[kSizeFive];
    aInt1[0] = 1000;
    aInt1[1] = 1001;
    aInt1[2] = 1002;
    aInt1[3] = 1003;
    aInt1[4] = 1004;


    for(int i = 0; i < kSizeFive; ++i) {
        cout << "aInt1[" << i << "]:" << aInt1[i] << endl;
    }

    cout << endl;


    int aInt2[] = {2001, 2002, 2003, 2004, 2005};

    for(int i = 0; i < kSizeFive; ++i) {
        cout << "aInt2[" << i << "]:" << aInt2[i] << endl;
    }

    cout << endl;


    int aInt3[kSizeFive];

    for(int i = 0; i < kSizeFive; ++i) {
        aInt3[i] = 3000 + i;
    }

    for(int i = 0; i < kSizeFive; ++i) {
        cout << "aInt3[" << i << "]:" << aInt3[i] << endl;
    }

    cout << endl;


    int aInt4[5][4];
    int test_num = 100;

    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 4; ++j) {
            aInt4[i][j] = test_num++;
        }
    };

    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 4; ++j) {
            cout  << aInt4[i][j] <<" ";
        }
        // new line for each dimension
        cout << endl;
    };

    int aInt5[kSizeFive][kSizeFour] = {
        {11, 12, 13,14},
        {21, 22, 23,24},
        {31, 32, 33,34},
        {41, 42, 43,44},
        {51, 52, 53,54},
    };

    for(int i = 0; i < kSizeFive; ++i) {
        for(int j = 0; j < kSizeFour; ++j) {
            cout  << aInt5[i][j] <<" ";
        }
        cout << endl;
    };

    // Single quotes for char
    // C++ 11 way of initializing char a_character {'x'};
    char a_character = 'x';
    cout << endl << "a_character: >" << a_character << "<" << endl;

    // '\0' flag to stop our loop. Represents a single character
    char first_name[] = {'A', 'n', 'd', 'y', '\0'};
    print_out_name(first_name);

    // Implicitly read as 'char second_name[6] = "James";' since '\0' is assumed...
    // char second_name[] = "James" : string array
    char second_name[] = "James";
    print_out_name(second_name);

    // String type => print_out_name(third_name) would throu an error if we didn't overload 
    // the function
    string third_name = "Duncan";
    print_out_name(third_name);

    return 0;
} 
