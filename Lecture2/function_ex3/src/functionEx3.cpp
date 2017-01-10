#include<iostream>
#include"console.h"

using namespace std;

void badSwap(int a, int b);
void goodSwap(int &a, int &b);

int main() {
    int a, b;
    a = 5;
    b = 12;
    cout << "original a: " << a << ", original b: "<< b << endl;
    badSwap(a, b);
    cout << "a after badSwap: " << a << ", b after badSwap: " << b << endl;
    goodSwap(a, b);
    cout << "a after goodSwap: " << a << ", b after goodSwap: " << b << endl;
    return 0;
}

void badSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void goodSwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
