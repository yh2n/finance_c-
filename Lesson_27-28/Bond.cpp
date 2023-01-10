#include "Bond.h"
#include <iostream>

using namespace std;

// '::Bond()': constructor
Bond::Bond() {
    cout << "I have created a default Bond" << endl;

    principal = 100.0;
    rate = 0.1;
    years_to_maturity = 1.0;
    payment_type = 'A';
}

void Bond::setPrincipal(double prin) {
    principal = prin;
};

double Bond::getPrincipal() {
    return principal;
};

void Bond::setRate(double rt) {
    rate = rt;
};

double Bond::getRate() {
    return rate;
};

void Bond::setYearsToMaturity(double ytm) {
    years_to_maturity = ytm;
};

double Bond::getYearsToMaturity() {
    return years_to_maturity;
};

void Bond::setPaymentType(char p_type) {
    payment_type = p_type;
};

double Bond::getPaymentType() {
    return payment_type;
};