#include "../std_lib_facilities.h"

/*
    Small program to test the dangers of unsafe type conversions.
    Unsafe conversions can be avoided with the use of C++11's {} initializers
    
    For example:
        double x {2.7}  // acceptable
        int y {x}       // unacceptable: narrowing conversion
*/

int main() {

    double d = 0;
    while (cin >> d) {
        int i = d;  // Unsafe conversion
        char c = i; // Unsafe conversion
        int i2 = c; // Safe conversion
        
        cout << "d == " << d << endl;
        cout << "i == " << i << endl;
        cout << "c == " << c << endl;
        cout << "i2 == " << i2 << endl;
    }
    return 0;
}