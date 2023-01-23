#include "Bond.h"
#include <iostream>
#include <cmath>

using namespace std;

Bond::Bond(double prin, double coup, double mkt, double ytm, char p_type) {
    cout << "I have created a tailored Bond" << endl;

    if((p_type != kBondAnnualType) && (p_type != kBondSemiannualType) && (p_type != kBondQuaterlyType)) {
        throw kBondInvalidType;
    }

    cout << "In the Bond constructor" << endl;

    setPrincipal(prin);
    setCouponRate(coup);
    setMarketRate(mkt);
    setYearsToMaturity(ytm);
    setPaymentType(p_type);
};

Bond::~Bond() {
    cout << "In the Bond deconstructor" << endl;
};

double Bond::getBondPrice() {
    double bond_price = 0.0;
    int scaling_factor = 0;

    if(getPaymentType() == kBondAnnualType) {
        scaling_factor = 1;
    }
    else if(getPaymentType() == kBondSemiannualType) {
        scaling_factor = 2;
    }
    else if(getPaymentType() == kBondQuaterlyType) {
        scaling_factor = 4;
    }
    double coupon = getPrincipal() * (getCouponRate()/scaling_factor);
    cout << "Coupon: " << coupon << endl;

    double periods = getYearsToMaturity() * scaling_factor;
    cout << "Periods: " << periods << endl;

    double yield = getMarketRate()/scaling_factor;
    cout << "Yield: " << yield << endl;

    double pv_coupons = (coupon * (1 - pow((1 + yield), - periods))) / yield;
    cout << "Present value of coupons: " << pv_coupons << endl;

    double pv_redemption = getPrincipal() * pow(( 1 + yield), - periods);
    cout << "Present value of redemption: " << pv_redemption << endl;

    bond_price = pv_coupons + pv_redemption;
    cout << "'Internal' bond price: " << bond_price << endl;

    return bond_price;
};

void Bond::setPrincipal(double prin) {
    principal = prin;
};

double Bond::getPrincipal() {
    return principal;
};

void Bond::setCouponRate(double coup) {
    coupon_rate = coup;
};

double Bond::getCouponRate() {
    return coupon_rate;
};

void Bond::setMarketRate(double mkt) {
    market_rate = mkt;
};

double Bond::getMarketRate() {
    return market_rate;
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