//
// Created by 10907 on 2019/9/25.
//

#ifndef MINESWEEPER_TILE_H
#define MINESWEEPER_TILE_H

struct Tile {
    int bomb;
    int bomb_num;
    bool visible = false;
};


#endif //MINESWEEPER_TILE_H
