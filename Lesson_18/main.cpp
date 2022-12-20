#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double input_dub = 87833433.309922;

    cout << "input dub: " << setprecision(30) << input_dub << endl;

    char start_str[64];
    // 'sprintf' used to write a formatted string to character string buffer.
    sprintf(start_str, "%.2f", input_dub);

    cout << "start str: " << start_str << endl;

    char final_str[128];
    long start_str_len = strlen(start_str);

    cout << start_str_len << endl;

    long dist_to_dot = start_str_len - 3;
    long decreasing_dist;

    int final_count = 0;
    for(int start_count = 0; start_str[start_count] != '\0'; ++start_count) {
        decreasing_dist = dist_to_dot - start_count;

        if(start_count != 0 && decreasing_dist > 0 && decreasing_dist % 3 == 0) {
            final_str[final_count++] = ',';
        }
        final_str[final_count++] = start_str[start_count];
    }
    final_str[final_count] = '\0';

    cout << "final str: " << final_str << endl;

    return 0;
}
