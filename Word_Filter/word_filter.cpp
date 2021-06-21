#include "../std_lib_facilities.h"
/*
    This code accepts a list of words from the user and prints an ordered
    version of this list. Repetitive words along with predetermined censored
    words are omitted from the printed list. 
*/

int main()
{
    // List of words to be censored
    vector<string> disliked;
    disliked.push_back("fruit");
    disliked.push_back("bad");
    disliked.push_back("car");

    cout << "Provide a list of words. Terminate the list with an end of file character\n";

    vector<string> dictionary;
    for (string word; cin >> word;) {
        // Ctrl+Z to break the loop
        dictionary.push_back(word);
    }

    sort(dictionary.begin(), dictionary.end());

    cout << "\nHere is the sorted dictionary.\n";

    bool censored_word = false;

    for (int i = 0; i < dictionary.size(); i++) {
        for (int j = 0; j < disliked.size(); j++) {
            if (dictionary[i] == disliked[j]) // Found a forbidden word
                censored_word = true;
        }
        if (i == 0 || dictionary[i - 1] != dictionary[i]) { // Ensure no repetition
            if (censored_word)
                cout << "*****" << endl;
            else 
                cout << dictionary[i] << endl;
            censored_word = false;
        }
        
    }

    return 0;
}