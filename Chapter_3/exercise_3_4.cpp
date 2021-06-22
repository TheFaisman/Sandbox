#include "../std_lib_facilities.h"

int main() {

    int val1 = 0;
    int val2 = 0;
    bool is_val1_greater = false;

    cout << "Enter the value of two numbers: ";
    cin >> val1 >> val2;
    
    if (val1 > val2) {
        cout << "Value 1 is greater than value 2.\n";
        is_val1_greater = true;
    } else if (val2 > val1) {
        cout << "Value 2 is greater than value 1.\n";
        is_val1_greater = false;
    } else if (val1 == val2) {
        cout << "Value 1 and value 2 are equal.\n";
        is_val1_greater = false;
    }
    
    cout << "Sum: " << val1 + val2 << endl;
    cout << "Difference: ";
    if (is_val1_greater) {
        cout << val1 - val2 << endl;
    } else {
        cout << val2 - val1 << endl;
    }

    cout << "Product: " << val1 * val2 << endl;
    cout << "Ratio: ";
    if (is_val1_greater) {
        cout << val1 / val2 << ":1" << endl;
    } else {
        cout << "1:" << val2 / val1 << endl;
    }
    return 0;
}