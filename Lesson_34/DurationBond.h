#include <iostream>
#include "Bond.h"

class DurationBond:public Bond {
    public: 
        const double kDurationBondRateChange = 0.005;

        DurationBond(double, double, double, double, char);

        ~DurationBond();

        double calculateDuration();
        void setDuration(double);
        double getDuration();

    private:
        double duration;
};