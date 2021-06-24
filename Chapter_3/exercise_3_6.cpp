#include "../std_lib_facilities.h"
/*
    This program accepts three integer inputs then outputs them in numerical
    sequence in a comma separated format.

    No iteration is used, there's likely room to improve this program.
*/
template <class T>
void Swap(T &first, T &second) {
    T temp = first;
    first = second;
    second = temp;
}

int main() {

    int numbers[3];
    cout << "Enter 3 integers: ";
    for (int i = 0; i < 3; i++) {
        cin >> numbers[i];
    }
    
    if (numbers[0] <= numbers[1] && numbers[0] <= numbers[2]) {
        cout << numbers[0] << ", ";
        if (numbers[1] <= numbers[2]) {
            cout << numbers[1] << ", " << numbers[2];
        } else {
            cout << numbers[2] << ", " << numbers[1];
        }
    } else if (numbers[1] <= numbers[0] && numbers[1] <= numbers[2]) {
        cout << numbers[1] << ", ";
        if (numbers[0] <= numbers[2]) {
            cout << numbers[0] << ", " << numbers[2];
        } else {
            cout << numbers[2] << ", " << numbers[0];
        }
    } else {
        cout << numbers[2] << ", ";
        if (numbers[0] <= numbers[1]) {
            cout << numbers[0] << ", " << numbers[1];
        } else {
            cout << numbers[1] << ", " << numbers[0];
        }
    }

    return 0;
}