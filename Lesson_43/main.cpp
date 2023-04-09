#include <iostream>

using namespace std;

template <class BUBBLE>
void bubbleSort(BUBBLE* vector, int num) {
    for(int i = 1; i < num; i++) {
        for(int j = 0; j < num - 1; j++){
            if(vector[j] > vector[j + 1]) {
                swap(vector[j], vector[j + 1]);
            }
        }
    }
}


template <class PRINTOUT>
void printOutVect(PRINTOUT* vector, int num) {
    for(int i = 0; i < num; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr_ints[5] = {23, 666, 5, 72, 69};
    printOutVect(arr_ints, 5);
    bubbleSort(arr_ints, 5);
    printOutVect(arr_ints, 5);

    return 0;
};