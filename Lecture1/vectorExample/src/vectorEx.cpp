#include<iostream>
#include"console.h" //Stanford Library
#include"vector.h" //Stanford Library

using namespace std;

const int NUM_ELEMENTS = 10;

int main() {
    Vector<int> myVec;
    for(int i = 0; i < NUM_ELEMENTS; i++) {
        myVec.add(i*2);
    }

    for(int i : myVec) {
        cout<<i<<endl;
    }
    return 0;
}
