#include <iostream>

using namespace std;


int main() {
    const int kSizeFive = 5;

    int aInt1[kSizeFive];
    aInt1[0] = 1000;
    aInt1[1] = 1001;
    aInt1[2] = 1002;
    aInt1[3] = 1003;
    aInt1[4] = 1004;

    // other approach...
    // int idx = 0;
    // aInt1[idx++] = 1000;
    // aInt1[idx++] = 1001;
    // aInt1[idx++] = 1002;
    // aInt1[idx++] = 1003;
    // aInt1[idx++] = 1004;

    for(int i = 0; i < kSizeFive; i++) {
        cout << "aInt[" << i << "]:" << aInt1[i] << endl;
    }
    return 0;
}