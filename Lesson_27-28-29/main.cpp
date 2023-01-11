#include <iostream>
#include "Bond.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // alternative syntax: Bond basic_bond = Bond()
    Bond basic_bond;
    cout << "Basic_bond.getPrincipal: " << basic_bond.getPrincipal() << endl;

    basic_bond.setPrincipal(1000.0);
    cout << "After, basic_bond.getPrincipal(): " << basic_bond.getPrincipal() << endl;

    Bond complex_bond(999.99, 0.05, 10, 'S');
    cout << "Complex_bond.getPrincipal(): " << complex_bond.getPrincipal() << endl;

    cout << "Basic.getBondPrice(): " << basic_bond.getBondPrice() << endl;
    cout << "Complex.getBondPrice(): " << complex_bond.getBondPrice() << endl;

    return 0;
}