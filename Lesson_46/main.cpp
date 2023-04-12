#include <iostream>
#include <vector>

using namespace std;

template <class T>
void printVect(T* vect) {
    cout << "Size of vector: " << vect->size() << endl;

    for(int i = 0; i < vect->size(); i++) {
        cout << vect->at(i) << endl;
    }
    cout << "-" << endl;
    return;
}


template<class T, class U>
void iteratorVect(T*vect, U it) {
    // link iterator to 1st element inside vector and move it along...
    for(it = vect->begin(); it != vect->end(); it++) {
        cout << *it << endl;
    }
    cout << "-" << endl;
}
int main() {
    vector<double> d_vec;
    d_vec.push_back(42.999);
    d_vec.push_back(23.05);
    d_vec.push_back(777.77);
    d_vec.push_back(88.99);
    d_vec.push_back(314.16);

    printVect(&d_vec);

    d_vec.pop_back();

    printVect(&d_vec);

    vector<double>::iterator an_iter;
    iteratorVect(&d_vec, an_iter);

    sort(d_vec.begin(), d_vec.end());
    iteratorVect(&d_vec, an_iter);

    return 0;
}