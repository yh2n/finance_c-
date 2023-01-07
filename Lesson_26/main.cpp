#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double dub_arr[5];

    for(int i = 0; i < 5; ++i) {
        dub_arr[i] = ((i + 1) * 100) + (i + 1);
    }

    for(int i = 0; i< 5; ++i) {
        cout << "dub[" << i << "]: " << dub_arr[i] << endl;
    }

    
    // dynamically allocating array size...
    int array_size = 0;
    cout << "How big would you like your array to be? ";
    cin >> array_size;

    double* p_dub_arr = new double[array_size];

     for(int i = 0; i < array_size; ++i) {
        p_dub_arr[i] = ((i + 1) * 100) + (i + 1);
    }

    for(int i = 0; i< array_size; ++i) {
        cout << "dub[" << i << "]: " << p_dub_arr[i] << endl;
    }

    // !!!! necessary to avoid memory leaks !!!!
    delete [] p_dub_arr;

    return 0;
}