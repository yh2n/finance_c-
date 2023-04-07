#include <iostream>

using namespace std;


template <class T>
T addNums(T num_one, T num_two) {
    return (num_one + num_two);
}

// if we wanted to pass a float and an int
// always start w/ the most complicated data type

// template <class ALPHA, class BETA>
// ALPHA addNums(ALPHA num_one, BETA num_two)  {
//     return (num_one + num_two);
// }

int main(int argc, const char * argv[]) {

    double n_one = 23.16;
    double n_two = 17.34;
    double n_ans = 0.0;

    n_ans = addNums(n_one, n_two);
 
    cout << n_one << " + " << n_two << " = " << n_ans;
    return 0;
}