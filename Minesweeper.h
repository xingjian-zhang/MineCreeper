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
#define BOMB_PROBABILITY 15

using namespace std;

class Minesweeper {
public:
    //constructor of minesweeper
    Minesweeper();

    //if true: display the board with bombs shown when the game is over
    //if false: display the current board (i.e. without bombs)
    void display(const bool argu);

    //whether the cell is a bomb or empty
    bool isBomb(const int row, const int col);
    bool isEmpty(const int row, const int col);

    //whether the game is over (win) i.e. all cells are visible
    bool done();

    //whether the given cell is valid
    bool validRow(const int row);
    bool validCol(const int col);

    //whether the given cell is visible
    bool isVisible(const int row, const int col);
    //make the given cell visible
    void enVisible(const int row, const int col);

    //trigger the given cell
    //may trigger a chain reaction
    bool play(const int row, const int col);



    int bomb_num;

private:
    vector<vector<Tile>> Board = vector<vector<Tile>>(SIZE + 2,vector<Tile>(SIZE + 2));
};


#endif //MINESWEEPER_MINESWEEPER_H
