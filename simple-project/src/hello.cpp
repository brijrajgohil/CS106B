#include <iostream>
#include "console.h"

using namespace std;

//Prototype
bool isPerfect(int num);

int main() {
    for(int i = 1; i <= 9999; i++) {
        if(isPerfect(i)) {
            cout << i << endl;
        }
    }
    return 0;
}

bool isPerfect(int num) {

    int total = 0;
    for(int i = 1; i < num; i++) {
        if(num % i == 0) {
            total += i;

        }
    }

    if(total == num) {
        return true;
    }
    return false;
}
