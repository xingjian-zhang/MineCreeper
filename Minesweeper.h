//
// Created by 10907 on 2019/9/25.
//

#ifndef MINESWEEPER_MINESWEEPER_H
#define MINESWEEPER_MINESWEEPER_H

#include "Tile.h"
#include <ctime>
#include <cstdlib>
#include <vector>

#define SIZE 10
#define BOMB_PROBABILITY 10

using namespace std;

class Minesweeper {
public:
    //constructor of minesweeper
    Minesweeper();

    //if true: display the board with bombs shown when the game is over
    //if false: display the current board (i.e. without bombs)
    void display(bool argu);

    //whether the cell is a bomb or empty
    bool isBomb(int row, int col);
    bool isEmpty(int row, int col);

    //whether the game is over (win) i.e. all cells are visible
    bool done();

    //whether the given cell is valid
    bool validRow(int row);
    bool validCol(int col);

    //whether the given cell is visible
    bool isVisible(int row, int col);
    //make the given cell visible
    void enVisible(int row, int col);

    //trigger the given cell
    //may trigger a chain reaction
    bool play(int row, int col);

    //flag
    void flag(int row, int col);
    bool isflag(int row, int col);

    int bomb_num = 0;

private:
    vector<vector<Tile>> Board = vector<vector<Tile>>(SIZE + 2,vector<Tile>(SIZE + 2));
};


#endif //MINESWEEPER_MINESWEEPER_H
