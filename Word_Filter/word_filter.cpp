#include "../std_lib_facilities.h"
/*
    This code accepts a list of words from the user and prints an ordered
    version of this list. Repetitive words along with predetermined censored
    words are omitted from the printed list. 

    There are several ways to implement this.
    1. We can push all words into the "dictionary" vector, then only print the unique ones
    2. We can iterate through the "dictionary" vector to ensure we only store unique words into it,
        then print the "dictionary" vector
    3. We can push all words into the "dictionary" vector, then push unique words into a
        "unique_dictionary" vector, and print the "unique_dictionary" vector

    What are the benefits and setbacks of each method?
    Method 1:
        One loop iteration the size of the dictionary, and minimal memory usage. The problem is that 
        iteration over the repeated words is required every time in order to print unique words
    Method 2 & 3:
        Two loop iterations; one to store all words in vector A, and another to store the unique words
        of vector A into vector B. For future lookups or prints, iteration over repeated words (vector A)
        is not required. The setback is that additional memory is used, however vector A can be discarded.
    
    In the interest of maintainability and future interest in unique words only, Method 3 will be used.
*/

template <class T>
void PrintVector(vector<T> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}

int main()
{
    // List of words to be censored
    vector<string> disliked;
    disliked.push_back("fruit");
    disliked.push_back("bad");
    disliked.push_back("car");

    cout << "Provide a list of words. Terminate the list with an end of file character (Ctrl+Z).\n";

    vector<string> input_strings;
    // Collect all the input into a temporary vector
    for (string word; cin >> word;) {
        input_strings.push_back(word);
    }

    // Sort the input string vector to cause repeated words to be adjacent to each other
    sort(input_strings.begin(), input_strings.end());

    // Create a new string vector to hold unique input string values
    vector<string> dictionary;
    for (int i = 0; i < input_strings.size(); i++) {
        if (i == 0 || input_strings[i - 1] != input_strings[i]) {
            dictionary.push_back(input_strings[i]);
        }
    }

    // Discard the string vector containing repeated words
    input_strings.clear();

    cout << "\nHere is the sorted dictionary.\n";

    bool is_word_censored = false;
    string censored_string = "*****";

    for (int i = 0; i < dictionary.size(); i++) {
        for (int j = 0; j < disliked.size(); j++) {
            if (dictionary[i] == disliked[j]) // Found a forbidden word
                is_word_censored = true;
        }
        if (is_word_censored)
            dictionary[i] = censored_string;
        is_word_censored = false;
    }

    PrintVector<string>(dictionary);

    return 0;
}