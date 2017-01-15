#include <iostream>
#include "console.h"
#include "random.h"

using namespace std;

void randomDecay(int &a);

int main() {
    int a = 10000, years = 1;
    cout << "There are "<< a <<" atoms initially." << endl;
    while(a > 0) {
        randomDecay(a);
        cout << " There are " << a << " atoms at the end of year " << years << endl;
        years++;
    }
    return 0;
}

void randomDecay(int &a) {
    for(int i = 1; i <= a; i++) {
        if(randomChance(0.5))
            continue;
        else
            a--;
    }
}
