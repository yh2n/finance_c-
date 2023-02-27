#include "BSM.h"

using namespace std;

BSM::BSM(float asset, float strk, float growth, float volty, float yrs, long steps, long sims) {
    bsm_asset = asset;
    bsm_strike = strk;
    bsm_growth = growth;
    bsm_vol = volty;
    bsm_years = yrs;
    bsm_steps = steps;
    bsm_monte_carlo_sims = sims;
}


void BSM::logNormalRandomWalk() {

}

double BSM::rn() {
    return 0.0;
}

float BSM::getBsmAsset() {
    return bsm_asset;
}

float BSM::getBsmStrike() {
    return bsm_strike;
} 

float BSM::getBsmGrowth() {
    return bsm_growth;
}

float BSM::getBsmVol() {
    return bsm_vol;
}

float BSM::getBsmYears() {
    return bsm_years;
}

long BSM::getBsmSteps() {
    return bsm_steps;
}

long BSM::getBsmMonteCarloSims() {
    return bsm_monte_carlo_sims;
}

double BSM::getCallPrice() {
    return bsm_call_price;
}

double BSM::getPutPrice() {
    return bsm_put_price;
}