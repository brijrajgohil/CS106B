#include <iostream>
#include "gwindow.h"
#include "gobjects.h"

using namespace std;

//void drawArc(GWindow &gw, GArc *arc, string color);

int main() {
    GWindow gw;
    double width = gw.getWidth();
    double height = gw.getHeight();
    //gw.setColor("CYAN");
    //gw.fillRect(0.0, 0.0, width, height);
    GArc *arc = new GArc(width, (height / 2), 0, 180);
    arc->setFilled(true);
    arc->setFillColor("MAGENTA");
    gw.add(arc, width / 2, 0);

//    drawArc(arc, "MAGENTA");
//    drawArc(arc, "BLUE");
//    drawArc(arc, "GREEN");
//    drawArc(arc, "YELLOW");
//    drawArc(arc, "ORANGE");
//    drawArc(arc, "RED");
    return 0;
}

//void drawArc(GWindow &gw, GArc *arc, string color) {

//}


