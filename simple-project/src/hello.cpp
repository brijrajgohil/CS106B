#include <iostream>
#include "console.h"
#include "random.h"

using namespace std;

int main() {
    int hCount = 0;
    int total = 0;
    while(hCount != 3) {
        if(randomChance(0.5)) {
            hCount++;
            cout << "heads" << endl;
        } else {
            hCount = 0;
            cout << "tails" << endl;
        }
        total++;
    }

    cout << "The total number of iterations " << total;
    return 0;
}
