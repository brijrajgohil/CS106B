#include <fstream>
#include <iostream>
#include <iomanip>
#include "console.h"
#include "hashmap.h"
#include "map.h"
#include "set.h"
#include "simpio.h"
#include "filelib.h"
#include "lexicon.h"

using namespace std;
string sortLetters(string s);

int main() {
    cout << "Anagrams" << endl;
    Map<string, Set<string>> anagram;
    Lexicon scrabbleLexicon("scrabble-dictionary.txt");
    for(string word : scrabbleLexicon) {
        string sorted = sortLetters(word);
        anagram[sorted].add(word);
    }

    //repeatedly prompt the user for words to look up in the map
    while(true) {
        string word = toLowerCase(getLine("Type a word [or Enter to quit]: "));
        if(word == "") {
            break;
        } else {
            string sorted = sortLetters(word);
            for(string found : anagram[sorted]) {
                cout << found << endl;
            }
        }
    }
    return 0;
}

//bbaacc -> aabbcc
string sortLetters(string s) {
    sort(s.begin(), s.end());
    return s;
}
