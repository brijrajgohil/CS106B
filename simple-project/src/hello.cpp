#include <iostream>
#include <string>
#include "console.h"
#include <cctype>

using namespace std;

string acronym(string str);

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << acronym(str) << endl;
    return 0;
}

string acronym(string str) {
    string temp;
    int t = 0;
    if(isalpha(str[0])){
        temp += str[0];
    }
    for(int i = 0; i < str.length(); i++) {
        if(!isalpha(str[i])) {
            t = -1;
            continue;
        } else if(t == -1) {
            temp += str[i];
            t = 1;
        }
    }
    return temp;
}
