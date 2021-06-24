#include "../std_lib_facilities.h"

int main() {
    string input[3];
    cout << "Enter 3 strings: ";
    for (int i = 0; i < 3; i++) {
        cin >> input[i];
    }
    
    if (input[0] <= input[1] && input[0] <= input[2]) {
        cout << input[0] << ", ";
        if (input[1] <= input[2]) {
            cout << input[1] << ", " << input[2];
        } else {
            cout << input[2] << ", " << input[1];
        }
    } else if (input[1] <= input[0] && input[1] <= input[2]) {
        cout << input[1] << ", ";
        if (input[0] <= input[2]) {
            cout << input[0] << ", " << input[2];
        } else {
            cout << input[2] << ", " << input[0];
        }
    } else {
        cout << input[2] << ", ";
        if (input[0] <= input[1]) {
            cout << input[0] << ", " << input[1];
        } else {
            cout << input[1] << ", " << input[0];
        }
    }

    return 0;
}