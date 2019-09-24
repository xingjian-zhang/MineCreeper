//
// Created by 10907 on 2019/9/24.
//

#include <math.h>
#include "coordinate.h"

coordinate::coordinate() {
    x = 0;
    y = 0;
}

coordinate::coordinate(int m, int n) {
    x = m;
    y = n;
}

coordinate coordinate::operator+(const coordinate &coor) {
    return coordinate(this->x+coor.x,this->y+coor.y);
}

bool coordinate::if_adjacent(const coordinate &coor) {
    return (abs(this->x - coor.x) <= 1) && (abs(this->y - coor.y) <= 1) ? true : false;
}
