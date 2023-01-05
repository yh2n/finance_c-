#include <iostream>

using namespace std;

struct nameAndSal {
    string name;
    double sal;
};

void printOut(nameAndSal* p_in, int sizeOfArray) {
    for(int i = 0; i < sizeOfArray; ++i) {
        // (*(p_in+i)).name: "disambiguation"
        cout << (*(p_in+i)).name << " , " << (*(p_in+i)).sal << endl;
    }
}

// bubble sort
void sortFab4(nameAndSal* p_NAS, int sizeOfArray) {
    bool swap_again {true}; 

    while(swap_again) {
        swap_again = false;
        for(int i = 0; i < sizeOfArray - 1; ++i) {
            if((*(p_NAS + i)).sal < (*(p_NAS + i + 1)).sal) {
                swap_again = true;
                nameAndSal temp = *(p_NAS + i);
                *(p_NAS + i) = *(p_NAS + i + 1);
                *(p_NAS + i + 1) = temp;

                cout << endl << "Swapped to..." << endl;
                printOut(p_NAS, sizeOfArray);
            }
        }
    }
}

int main(int argc, char * argv[]) {

    nameAndSal fAB[4] = {
        {"John", 7900},
        {"Paul", 129000},
        {"George", 99000},
        {"Ringo", 89000}
    };

    cout << endl << "Before processing..." << endl;
    printOut(fAB, 4);

    // sorting operation
    sortFab4(fAB, 4);

    cout << endl << "After processing..." << endl;
    printOut(fAB, 4);

    return 0;
}