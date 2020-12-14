#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
/*
    This code accepts a list of words from the user and prints an ordered
    version of this list. Repetitive words along with predetermined disliked
    words are omitted from the printed list. 
*/

int main()
{
    // List of unacceptable words
    std::vector<std::string> disliked { "fruit", "cars", "bad" };

    std::cout << "Provide a list of words.\n";

    std::vector<std::string> dictionary;
    for (std::string word; std::cin >> word;) {
        dictionary.push_back(word);
    }

    std::sort(dictionary.begin(), dictionary.end());

    std::cout << "\nHere is the sorted dictionary.\n";

    bool dirty_word = false;

    for (int i = 0; i < dictionary.size(); i++) {
        for (int j = 0; j < disliked.size(); j++) {
            if (dictionary[i] == disliked[j]) // Found a dirty word
                dirty_word = true;
        }
        if (dirty_word) {
            std::cout << "BLEEP" << std::endl;
        } else if (i == 0 || dictionary[i - 1] != dictionary[i]) { // Ensure no repetition

            std::cout << dictionary[i] << std::endl;
        }
        dirty_word = false;
    }

    return 0;
}