#include "Bond.h"
#include <iostream>

using namespace std;

// '::Bond()': constructor
Bond::Bond() {
    cout << "I have created a default Bond" << endl;

    setPrincipal(100.0);
    setRate(0.1);
    setYearsToMaturity(1.0);
    setPaymentType('A');
};

Bond::Bond(double prin, double rt, double ytm, char p_type) {
    cout << "I have created a tailored Bond" << endl;

    setPrincipal(prin);
    setRate(rt);
    setYearsToMaturity(ytm);
    setPaymentType(p_type);
};

double Bond::getBondPrice() {
    return 42.0;
};

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