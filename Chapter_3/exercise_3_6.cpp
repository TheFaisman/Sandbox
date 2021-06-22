#include "../std_lib_facilities.h"
/*
    This program accepts three integer inputs then outputs them in numerical
    sequence in a comma separated format.

    A swap looks like:
    numbers[i-1] <=> numbers[i]
    temp = numbers[i]
    numbers[i] = numbers[i-1]
    numbers[i-1] = temp 
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
    
    return 0;
}