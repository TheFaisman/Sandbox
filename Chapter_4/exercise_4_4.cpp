#include "../std_lib_facilities.h"

/*
    Write a program to play a numbers guessing game. The user thinks of a number between
    1 and 100 and your program asks questions to figure out what the number is.
    Your program should be able to identify the number after asking no more than seven
    questions. 

    There has to be a better way than just hardcoding the questions and answers.
    Currently incomplete
*/

int main() {
    cout << "Think of a number between 1 and 100." << endl;
    cout << "Now tell me, is it less than or equal to 50? (y/n): ";
    char answer = ' ';
    cin >> answer;

    if (answer == 'y') {
        cout << "Great! Is it less than or equal to 25? (y/n): ";
        cin >> answer;
        if (answer == 'y') {
            cout << "We're making progress! Is it less than or equal to 12? (y/n): ";
            cin >> answer;
            if (answer == 'y') {
                cout << "Getting there... Is it less than or equal to 6? (y/n): ";
                cin >> answer;
                if (answer == 'y') {
                    cout << "Good to know! Is it less than or equal to 3? (y/n): ";
                    cin >> answer;
                    if (answer == 'y') {
                        cout << "Almost there! Is it less than or equal to 2? (y/n): ";
                        cin >> answer;
                        if (answer == 'y') {
                            cout << "Is your number equal to 2? (y/n): ";
                            cin >> answer;
                            if (answer == 'y') {
                                cout << "Excellent! That only took me 7 questions...";
                            } else if (answer == 'n') {
                                cout << "Then your number must be 1!";
                            }
                        } else if (answer == 'n') {
                            cout << "Then your number must be 3!";
                        }
                    }
                }
            }
        }
    }
    return 0;
}