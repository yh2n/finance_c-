#include "DurationBond.h"

using namespace std;


// we are accessing the Bond variables by going to the 'super' constructor
DurationBond::DurationBond(double prin, double coup, double mkt, double ytm, char typ):Bond(prin, coup, mkt, ytm, typ) {

    cout << "In the DurationBond constructor" << endl;

    setDuration(calculateDuration());
}

DurationBond::~DurationBond() {
    cout << "In the duration bond" << endl;
}

double DurationBond::calculateDuration() {
    // get the current YTM of the bond
    double original_mkt_rate = getMarketRate();
    // shock interest rate factor is "Y", and as it's 
    // a difference b/w rates, we often call it "delta"
    double delta_y = kDurationBondRateChange;

    if(original_mkt_rate <= kDurationBondRateChange) {
        delta_y = original_mkt_rate - 0.0001;
    }
    cout << "Delta_y: " << delta_y << endl;

    // current bound price
    double v1 = getBondPrice();
    cout << "Current bond price, v1: " << v1 << endl;

    // shock interest down by delta_y
    double bips_lower = original_mkt_rate - delta_y;
    cout << "Bips lower: " << bips_lower << endl;

    setMarketRate(bips_lower);

    double v2 = getBondPrice();
    cout << "Higher bond price, v2: " << v2 << endl;
    
    double bips_higher = original_mkt_rate - delta_y;
    cout << "Bips lower: " << bips_higher << endl;

    setMarketRate(bips_higher);

    double v3 = getBondPrice();
    cout << "Lower bond price, v3: " << v3 << endl;

    // reset YTM to actual current rate...
    setMarketRate(original_mkt_rate);

    // calculate bond duration
    // duration = v2 - v3 / 2(v1)(delta_y)

    double calc_duration = (v2 - v3) / (2 * v1 * delta_y);
    cout << "Internal, calc_duration: " << calc_duration << endl;

    return calc_duration;
}

double DurationBond::getDuration() {
    return duration;
}

void DurationBond::setDuration(double inp_dur) {
    duration = inp_dur;
}

