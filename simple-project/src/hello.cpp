#include <iostream>
#include "console.h"
#include <string>

using namespace std;

string myTrim(string str);

int main() {
    cout << myTrim("Hello World") << endl; //returns HelloWorld
    cout << myTrim("Cool    space    "); //returns Coolspace
    return 0;
}

string myTrim(string str) {
    string temp;
    for(int i = 0; i < str.length(); i++) {
        if(isspace(str[i])) {
            continue;
        }
        else {
            temp += str[i];
        }
    }
    return temp;
}
