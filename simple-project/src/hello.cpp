#include "gobjects.h"
#include <iostream>

using namespace std;

int main() {
    initGraphics();
    setColor("BLUE");
    fillRect(50, 50, 300, 150);
    setFont("SansSerif-Bold-48");
    setColor("WHITE");
    drawString("hello, world", 60, 140);
    return 0;
}
