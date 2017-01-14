#include <iostream>
#include "console.h"

using namespace std;

int calc(int num, int temp);

int main() {
    int n, k;
    cout << "Enter n ";
    cin >> n;
    cout << "Enter k ";
    cin >> k;
    int temp = n - k;
    int perm = calc(n, temp);
    cout << perm << endl;
    return 0;
}


int calc(int num, int temp) {
    int total = 1;
    for(int i = a; i > b; i--) {
        total *= i;
    }
    return total;
}
