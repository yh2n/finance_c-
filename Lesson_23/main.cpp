#include <iostream>

using namespace std;

// int* --> we need to tell the pointer how big the blocks of memory are in the array
// so it knows how many bytes to move along
void fPointer(int* p_input, int sizeOfArray) {
    cout << endl << "In fPointer" << endl;

    for(int i = 0; i < sizeOfArray; ++i) {
        cout << "p_input: " << p_input << ", " <<
                "*p_input: " << *p_input << endl;
        // we're not moving along with ++i

        p_input++; 
    }
    // Pointer is pointing beyond the end of the array...
    // cout << endl << "After for loop, p_input: " << endl <<
    //         p_input << ", " <<
    //         "*p_input: " << *p_input << endl;
}
void fFullArray(int input_array[], int sizeOfArray) {
    cout << endl << "In fFullArray" << endl;
    cout << "input array: " << input_array << endl;
    input_array[0] += 2;
    for(int i = 0; i < sizeOfArray; ++i) {
        cout << "input array [" << i << "]: " << input_array[i] << endl;
        cout << "i&nput array [" << i << "]: " << &input_array[i] << endl;
    }
}

int main(int argc, char * argv[]) {
    int a_int[] = {101, 202, 303};
    // Will log the address and not the array. 
    // The name of the array is a pointer
    cout << "a_int:     " << a_int << endl;

    int* p_int_one = a_int;
    // Will log the exact same address as above 
    cout << "p_int_one: " << p_int_one << endl;

    // Pointing at first element of the array
    int* p_int_two = &a_int[0];
    // Will log the exact same address as above 
    cout << "p_int_one: " << p_int_two << endl;

    // they are all pointing at the same addresses, values
    fPointer(a_int, 3);    
    fPointer(p_int_one, 3);    
    fPointer(p_int_two, 3);    

    fFullArray(a_int, 3);
    // Returns 103
    cout << a_int[0] << endl;

    return 0;
}