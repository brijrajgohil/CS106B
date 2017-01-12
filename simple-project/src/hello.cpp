#include <iostream>
#include "console.h"

using namespace std;

void calculateEaster(int year);

int main() {
    calculateEaster(1744);
    calculateEaster(1815);
    return 0;
}

void calculateEaster(int year) {
    int a = year % 19;
    int b = year % 4;
    int c = year % 7;
    int d = ((19 * a) + 23) % 30;
    int e;
    if(year >= 1700 && year <= 1799) {
        e = ((2 * b) + (4 * c) + (6 * d) + 3) % 7;
    } else if(year >= 1800 && year <= 1899) {
        e = ((2 * b) + (4 * c) + (6 * d) + 4) % 7;
    }

    if((d + e) > 9) {
        cout << "April " << d + e - 9 << endl;
    }
    else {
        cout << "March " << 22 + d + e << endl;
    }

}
