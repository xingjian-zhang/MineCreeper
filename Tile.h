//
// Created by 10907 on 2019/9/25.
//

#ifndef MINESWEEPER_TILE_H
#define MINESWEEPER_TILE_H

struct Tile {
    int bomb = 0;
    int bomb_num = 0;
    bool visible = false;
    bool flag = false;
};

struct coordinate{
    int row = -1, col = -1;
};

#endif //MINESWEEPER_TILE_H
