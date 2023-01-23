#include <iostream>
#include "DurationBond.h"

using namespace std;

 
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

    DurationBond db(pcp, cp_rate, mkt_rate, yrs_to_mat, pmt_type);

    double external_bond_price = db.getBondPrice();
    cout << "Duration bond price: " << external_bond_price << endl;

    return 0;
} 