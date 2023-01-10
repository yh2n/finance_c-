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