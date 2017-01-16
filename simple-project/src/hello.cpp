#include "gwindow.h"
#include <iostream>

using namespace std;

double const RAINBOW_THICKNESS = 15.0;
double const RAINBOW_SIZE = 200;

void setBackgroundColor(GWindow &gw);
void drawRainbow(GWindow &gw);
string colorToString(int color);

int main() {
    GWindow gw;
    setBackgroundColor(gw);
    drawRainbow(gw);
    return 0;
}

void setBackgroundColor(GWindow &gw) {
    double width = gw.getWidth();
    double height = gw.getHeight();
    gw.setColor("CYAN");
    gw.fillRect(0, 0, width, height);
}

void drawRainbow(GWindow &gw) {
    for(int i = 1; i < 8; i++) {
        double width = (gw.getWidth() + (RAINBOW_SIZE * 2) - (RAINBOW_THICKNESS * i) * 2);
        double y = RAINBOW_THICKNESS * i;
        double x = (RAINBOW_THICKNESS * i) - RAINBOW_SIZE;
        gw.setColor(colorToString(i));
        gw.fillOval(x, y, width, width);
    }
}

string colorToString(int color) {
    switch (color) {
            case 1:
                return "RED";
            case 2:
                return "ORANGE";
            case 3:
                return "YELLOW";
            case 4:
                return "GREEN";
            case 5:
                return "BLUE";
            case 6:
                return "MAGENTA";
            case 7:
                return "CYAN";
            default:
                return "BLACK";
    }
}
