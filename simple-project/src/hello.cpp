#include <iostream>
#include "console.h"
#include <string>

using namespace std;

string mySub(string str, int pos, int n);
string mySub(string str, int pos);

int main() {
    cout << mySub("Hello world", 6) << endl; //returns "world"
    cout << mySub("Hakuna matata", 9, 20) << endl; //returns "tata"
    cout << mySub("Happy coding", 54) << endl; //returns error
    return 0;
}

string mySub(string str, int pos, int n) {
    string temp;
    if(pos >= str.length()) {
        return "Error";
    }
    int length = str.length();
    if(n >= length || ((pos + n) >= str.length())) {
        n = str.length() - 1;
    }
    for(int i = pos; i <= n; i++) {
        temp += str[i];
    }
    return temp;
}

string mySub(string str, int pos) {
    string temp;
    if(pos >= str.length()) {
        return "Error";
    }
    int length = str.length();
    for(int i = pos; i < length; i++) {
        temp += str[i];
    }
    return temp;
}
