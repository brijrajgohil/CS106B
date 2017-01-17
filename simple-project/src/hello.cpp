#include <iostream>
#include <string>
#include "console.h"

using namespace std;

bool isPalindrome(string s);

int main() {
    cout << isPalindrome("HELLO");
    return 0;
}
 bool isPalindrome(string s) {
     int n = s.length();
     for(int i = 0; i < n / 2; i++) {
         if(s[i] != s[n - i - 1]) return false;
     }
     return true;
 }
