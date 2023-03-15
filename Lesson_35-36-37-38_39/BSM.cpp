#include "BSM.h"
#include <math.h>

using namespace std;

// black scholes equation
// S{PHI}(d1) = Ke - rT{PHI}(d2)

BSM::BSM(float asset, float strk, float growth, float volty, float yrs, long steps, long sims) {
    bsm_asset = asset;
    bsm_strike = strk;
    bsm_growth = growth;
    bsm_vol = volty;
    bsm_years = yrs;
    bsm_steps = steps;
    bsm_monte_carlo_sims = sims;
}

BSM::~BSM() {};

void BSM::logNormalRandomWalk() {
    srand((unsigned)time(0));

    double call_payoff_pot = 0.0;
    double put_payoff_pot = 0.0;

    double time_step = getBsmYears() / getBsmSteps();
    double sqrt_ts = sqrt(time_step);

    for(long i = 1; i <= getBsmMonteCarloSims(); i++) {
        double ast = getBsmAsset();
        for(int j = 1; j <= getBsmAsset(); j++) {
            ast = ast * (1 +  getBsmGrowth() * time_step + getBsmVol() * sqrt_ts * (
                // adding 12 random numbers b/w 0 and 1, substract 6 to get value 
                // close to PHI
                rn() + rn() + rn() +
                rn() + rn() + rn() +
                rn() + rn() + rn() +
                rn() + rn() + rn() - 6
            ));
            
        }

        // cout << "Final asset, this run " << ast << endl;
        if(ast > getBsmStrike()) {
            call_payoff_pot += (ast - getBsmStrike());
        }
        else if(ast < getBsmStrike()) {
            put_payoff_pot += (getBsmStrike() - ast);
        }

        // cout<< "Call payoff pot: " << call_payoff_pot << endl;
        // cout<< "Put payoff pot: " << put_payoff_pot << endl;

        if((i % 10000) == 0) {
            cout << "." << flush;
            if((i % 100000) == 0) {
                long i_mess = i / 1000;
                 cout << i_mess << "k" << flush;
            }
        }
    }

    bsm_call_price = call_payoff_pot / getBsmMonteCarloSims();
    bsm_put_price = put_payoff_pot / getBsmMonteCarloSims();

    return;
}

double BSM::rn() {
    return (double)rand()/(double)(RAND_MAX + 1.0);
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