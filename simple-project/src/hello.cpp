#include <iostream>
#include "console.h"
#include <string>

using namespace std;

bool endsWith(string str, string suffix);

int main() {
    //tests
    cout << endsWith("HELLO", "0") << endl; //returns 0
    cout << endsWith("HELLO", "LO") << endl; //returns 1
    cout << endsWith("HELLO", "HELLO") << endl; //returns 1
    return 0;
}

bool endsWith(string str, string suffix) {
    if(str.length() < suffix.length()) {
        return false;
    }
    int temp = str.length() - suffix.length();
    for(int i = 0; i < suffix.length(); i++) {
        if(str[temp] != suffix[i]) {
            return false;
        }
        temp++;
    }
    return true;
}
