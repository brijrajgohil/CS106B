#include <iostream>
#include "gwindow.h"

int main() {
    GWindow gw;
    gw.setColor("CYAN");
    gw.fillRect(0.0, 0.0, gw.getWidth(), gw.getHeight());
    return 0;
}
