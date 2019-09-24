//
// Created by 10907 on 2019/9/24.
//

#ifndef MINESWEEPER_COORDINATE_H
#define MINESWEEPER_COORDINATE_H

using namespace std;

class coordinate {
public:
    coordinate();
    coordinate(int m,int n);

    coordinate operator+(const coordinate& coor);
    bool if_adjacent(const coordinate& coor);

private:
    int x;
    int y;
};




#endif //MINESWEEPER_COORDINATE_H
