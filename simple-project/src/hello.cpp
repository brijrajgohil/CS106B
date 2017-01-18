#include <iostream>
#include <string>
#include <cctype>
#include "console.h"

using namespace std;

int main() {
    string words;
    int score = 0;
    cout << "Enter the words: ";
    getline(cin, words);
    for (int i = 0; i < words.length(); i++) {
        if (isupper(words[i])) {
            switch (words[i]) {
            case 'A': case 'E': case 'I': case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                score += 1;
                break;
            case 'D': case 'G':
                score += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                score += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                score += 4;
                break;
            case 'J': case 'X':
                score += 8;
                break;
            case 'Q': case 'Z':
                score += 10;
                break;
            default:
                break;
            }
        }

    }

    cout <<"You scored: " << score << endl;
    return 0;
}

