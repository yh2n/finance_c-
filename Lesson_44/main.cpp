#include <iostream>
#include <cmath>

using namespace std;

// ••••••• class-based approach ••••••••
// class SwapSpread {
//     public:
//     SwapSpread(double, double);
//     double spread_rate();

//     private:
//         double swap_rate_in;
//         double swap_rate_out;
// };

// SwapSpread::SwapSpread(double swap_in, double swap_out) {
//     swap_rate_in = swap_in;
//     swap_rate_out = swap_out;
// }

// double SwapSpread::spread_rate() {
//     return abs(swap_rate_in - swap_rate_out);
// }

// int main() {

//     SwapSpread swap_s(7.42, 7.54);

//     cout << "Swap spread: " << swap_s.spread_rate() << endl;
//     return 0;
// }


template <class T>
class SwapSpread {
    public:
    SwapSpread(T, T);
    T spread_rate();

    private:
        T swap_rate_in;
        T swap_rate_out;
};

template <class T>
SwapSpread<T>::SwapSpread(T swap_in, T swap_out) {
    swap_rate_in = swap_in;
    swap_rate_out = swap_out;
}

template <class T>
T SwapSpread<T>::spread_rate() {
    return abs(swap_rate_in - swap_rate_out);
}

int main() {

    double first_s = 5.42;
    double second_s = 7.54;

    double spread = 0.0;
    SwapSpread <double> swap_s(first_s, second_s);
    spread = swap_s.spread_rate();

    cout << "Swap spread: " << spread << endl;
    return 0;
}