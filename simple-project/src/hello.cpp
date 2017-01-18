#include <iostream>
#include <string>
#include <cctype>
#include "console.h"

using namespace std;

string capitalize(string str);

int main() {
    cout << capitalize("HELLO"); //returns "Hello"
    cout << capitalize("hello"); //returns "Hello"
    return 0;
}

string capitalize(string str) {
    string temp;
    temp += toupper(str[0]);
    for(int i = 1; i < str.length(); i++) {
        temp += tolower(str[i]);
    }
    return temp;
}
