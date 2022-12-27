#include <iostream>

using namespace std;

// returns a reference
int& max_num(int& firstN, int& secondN) {
    if(firstN > secondN) {
        return firstN;
    }
    else {
        return secondN;
    }
}

int main(int argc, char * argv[]) {
    int an_int {42};

    cout << "an_int:     " << an_int << endl; 

    int& ref_an_int = an_int;
    int ref_an_int_b = an_int;
    cout << "ref_an_int: " << ref_an_int << endl; 

    an_int *= 3;
    cout << "an_int:       " << an_int << endl <<
            "ref_an_int:   " << ref_an_int << endl <<
            "ref_an_int_b: " << ref_an_int_b << endl;

    // ***************************

    int first_num = 42;
    int second_num = 75;

    cout << "first num: " << first_num << ", second num: " << second_num << endl;
    // set the largest of the two to 99
    max_num(first_num, second_num) = 99;

    return 0;
}