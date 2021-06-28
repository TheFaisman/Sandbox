#include "../std_lib_facilities.h"
/*
    Create a program that finds the mode of a set of positive integers.
*/
template <class T>
T find_mode(vector<T> arg_vector) {
    T current_mode;
    T num_of_occurences = 0;
    for (int i = 0; i < arg_vector.size(); i++) {

    }
    return T;
}

int main() {
    cout << "Enter values of a set of positive integers: ";
    vector<int> input_values;
    for (int temp; cin >> temp;) {
        input_values.push_back(temp);
    }
    
    sort(input_values);

    int mode = find_mode(input_values);
    cout << "The mode of the set of positive integers is " << mode << ".\n";

    return 0;
}