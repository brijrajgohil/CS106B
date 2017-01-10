#include<iostream>
#include"console.h"

using namespace std;

/* Function prototypes */
int combination(int n, int k);
int fact(int n);

/* Main program */
int main() {
    int n, k;
    cout << "Enter the number of objects(n): ";
    cin >> n;
    cout << "Enter the number to be chosen(k): ";
    cin >> k;
    cout << "C(n, k) = " << combination(n, k) << endl;
    return 0;
}

int combination(int n, int k) {
    return fact(n) / (fact(k) * fact(n - k));
}

int fact(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
