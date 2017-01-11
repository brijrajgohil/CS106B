/* File direction.h
 * The interface
 * #ifndef _direction_h
 * #define _direction_h
 *
 * #include <string>
 *
 * enum Direction { NORTH, EAST, SOUTH, WEST };
 *
 * Direction leftFrom(Direction dir);
 *
 * Direction rightFrom(Direction dir);
 *
 * std::string directionToString(Direction dir);
 *
 */

#include <string>
#include <direction.h>
using namespace std;

Direction leftFrom(Direction dir) {
    return Direction((dir + 3) % 4);
}

Direction rightFrom(Direction dir) {
    return Direction((dir + 1) % 4);
}

string directionToString(Direction dir) {
    switch(dir) {
        case NORTH: return "NORTH";
    case EAST: return "EAST";
    case SOUTH: return "SOUTH";
    case WEST: return "WEST";
    default: return "??";
    }
}
