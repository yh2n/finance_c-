#include "DurationBond.h"

using namespace std;


// we are accessing the Bond variables by going to the 'super' constructor
DurationBond::DurationBond(double prin, double coup, double mkt, double ytm, char typ):Bond(prin, coup, mkt, ytm, typ) {

    cout << "In the DurationBond constructor" << endl;
};

DurationBond::~DurationBond() {
    cout << "In the duration bon" << endl;
};