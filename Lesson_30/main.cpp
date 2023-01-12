#include <iostream>
#include "Bond.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Bond complex_bond(7000, 0.07, 0.15, 12, 'S');

    double external_bond_price = complex_bond.getBondPrice();
    cout << "'External' bond price: " << external_bond_price << endl;

    return 0;
} 