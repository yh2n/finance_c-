#include <iostream>

class BSM {
    public: 
        BSM(float, float, float, float, float, long, long); 

        float getBsmAsset();
        float getBsmStrike();
        float getBsmGrowth();
        float getBsmVol();
        float getBsmYears();
        long getBsmSteps();
        long getBsmMonteCarloSims();

        void logNormalRandomWalk();

        double getCallPrice();
        double getPutPrice();

        double rn(); 

    private: 
        float bsm_asset;
        float bsm_strike;
        float bsm_growth;
        float bsm_vol;
        float bsm_years;
        long bsm_steps;
        long bsm_monte_carlo_sims;

        double bsm_call_price;
        double bsm_put_price;
};