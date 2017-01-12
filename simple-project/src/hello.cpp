#include <iostream>
#include "console.h"

using namespace std;

int myFact(int num);
int calc(int a, int b);

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

int myFact(int num) {
    int fact = 1;
    for(int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int calc(int a, int b) {
    int total = 1;
    for(int i = a; i >= b; i--) {
        total *= i;
    }
    return total;
}
