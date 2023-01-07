#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    char a_char {'X'};
    cout << "a_char: " << a_char << endl;

    char a_name[] {"Malvolio"};
    cout << "a_name: " << a_name << endl;

    // "conversion from string literal to 'char*' is deprecated"... 
    // => string a_string = "Orsino";
    char* c_names[] = {"Pinky", "Perky", "Porky"};
    for(int i = 0; i < 3; ++i) {
        cout << "c names[" << i << "]: " << c_names[i] << endl;
    }

    string cpp_names[] = {"Scotty", "Kirky", "Spocky"};
    for(int i = 0; i < 3; ++i) {
        cout << "cpp_names[" << i << "]: " << cpp_names[i] << endl;
    }
    cout << "cpp_names: " << cpp_names << endl;


    return 0;
};