#include <iostream>
#include <iomanip>
#include <locale>
#include <sstream>

using namespace std;

class AndysCommmaNumPunct: public numpunct <char> {
    protected: 
        // "virtual" => use the last in the class derived...
        virtual char do_thousands_sep() const {
            return ',';
        }
        virtual string do_grouping() const {
            return "\003";
        }
};

template <class T>
string AndyFormatWithCommas(T value) {
    stringstream ss;
    // creates new standard template library; overwrites class...
    locale AndyCommaLoc(locale(), new AndysCommmaNumPunct());
    ss.imbue(AndyCommaLoc);
    ss << setprecision(2) << fixed << value;
    return ss.str();
}


int main() {
    int an_int = 31235;
    cout << "int: " << AndyFormatWithCommas(an_int) << endl;

    float a_float = 31235.47987;
    cout << "int: " << AndyFormatWithCommas(a_float) << endl;

    long a_long = 987654321;
    cout << "int: " << AndyFormatWithCommas(a_long) << endl;

    double a_double = 987654321.123456789;
    cout << "int: " << AndyFormatWithCommas(a_double) << endl;

    return 0;
}