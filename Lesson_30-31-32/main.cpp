#include <iostream>
#include "Bond.h"

using namespace std;

// int main(int argc, const char * argv[]) {
//     try {

//         Bond complex_bond(7000, 0.07, 0.15, 12, 'A');

//         double external_bond_price = complex_bond.getBondPrice();
//         cout << "'External' bond price: " << external_bond_price << endl;
//     }
//     catch(int error) {
//         cout << "Bond creation failed" << endl;
//     }

//     return 0;
// }

int main(int argc, const char * argv[]) {
    int pcp = 0;
    double cp_rate = 0.0;
    double mkt_rate = 0.0;
    int yrs_to_mat = 0;
    char pmt_type;

    cout << "Principal: " << endl;
    cin >> pcp;

    cout << "Coupon rate: " << endl;
    cin >> cp_rate;

    cout << "Market rate: " << endl;
    cin >> mkt_rate;

    cout << "Years to maturiry: " << endl;
    cin >> yrs_to_mat;

    cout << "Payment type('A'nnual, 'S'emi-annual, 'Q'uaterly): " << endl;
    cin >> pmt_type;

    try {
    Bond complex_bond(pcp, cp_rate, mkt_rate, yrs_to_mat, pmt_type);

    double external_bond_price = complex_bond.getBondPrice();
    cout << "'External' bond price: " << external_bond_price << endl;
    }
    catch(int error) {
        cout << "Bond creation failed, ERROR: " << error << endl;
    }

    return 0;
} 