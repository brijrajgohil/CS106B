#include <iostream>
#include "console.h"

using namespace std;

bool isPrime(int num);

int main() {
    for(int i = 2; i <= 100; i++) {
        if(isPrime(i)) {
            cout << i << endl;
        }
    }
    return 0;
}

bool isPrime(int num) {
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}
