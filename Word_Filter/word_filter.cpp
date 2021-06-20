#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
/*
    This code accepts a list of words from the user and prints an ordered
    version of this list. Repetitive words along with predetermined censored
    words are omitted from the printed list. 
*/

int main()
{
    // List of words to be censored
    std::vector<std::string> disliked { "fruit", "cars", "bad" };

    std::cout << "Provide a list of words.\n";

    std::vector<std::string> dictionary;
    for (std::string word; std::cin >> word;) {
        if (word == "end")
            break;
        else
            dictionary.push_back(word);
    }

    std::sort(dictionary.begin(), dictionary.end());

    std::cout << "\nHere is the sorted dictionary.\n";

    bool censored_word = false;

    for (int i = 0; i < dictionary.size(); i++) {
        for (int j = 0; j < disliked.size(); j++) {
            if (dictionary[i] == disliked[j]) // Found a forbidden word
                censored_word = true;
        }
        if (censored_word) {
            std::cout << "*****" << std::endl;
        } else if (i == 0 || dictionary[i - 1] != dictionary[i]) { // Ensure no repetition

            std::cout << dictionary[i] << std::endl;
        }
        censored_word = false;
    }

    return 0;
}