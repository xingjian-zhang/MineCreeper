//
// Created by 10907 on 2019/9/25.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Minesweeper.h"


using namespace std;

Minesweeper::Minesweeper() {

    srand(time(nullptr));      //initialize the random seed
    bomb_num = 0;

    //initialize the board randomly under known bomb probability
    for(int i = 0; i < SIZE + 2; i++){
        for(int j = 0; j < SIZE + 2; j++){
            Board[i][j].bomb_num = 0;
            if((i==0)||(i==SIZE+1)||(j==0)||(j==SIZE+1)){
                Board[i][j].bomb = 0;
                continue;
            }
            Board[i][j].bomb = (rand() % 100) < BOMB_PROBABILITY ? 1 : 0;
            bomb_num += Board[i][j].bomb;       //sum up the global bomb number
        }
    }

    //sum up the local bomb number around certain cell
    for(int i = 1; i < SIZE + 1; i++){
        for(int j = 1; j < SIZE + 1; j++){
            for (int ii = -1; ii <=1 ; ++ii) {
                for (int jj = -1; jj <= 1 ; ++jj) {
                    if ((ii == 0) && (jj == 0)) continue;
                    Board[i][j].bomb_num += Board[i+ii][j+jj].bomb;
                }
            }
        }
    }


}

void Minesweeper::display(const bool argu) {
    cout << " ";
    for (int j = 1; j < SIZE + 1; ++j) {
        cout << j % 10 << '_';
    }
    cout << "\n";

    if (!argu) {
        for(int i = 1; i < SIZE + 1; i++) {
            cout << i % 10 << '|';
            for (int j = 1; j < SIZE + 1; j++) {
                if (!isVisible(i, j)) {
                    if (isflag(i, j)) {
                        cout << "P ";
                    }
                    else {
                    cout << "  ";
                    }
                    continue;
                }
                isEmpty(i, j) ? cout << "0 " : cout << Board[i][j].bomb_num << ' ';
            }
            cout << "\n";
        }
        return;
    }

    for(int i = 1; i < SIZE + 1; i++) {
        cout << i % 10 << '|';
        for (int j = 1; j < SIZE + 1; j++) {
            if (isBomb(i, j)){
                cout << 'x' <<' ';
            }
            else if (isEmpty(i, j)){
                cout << "0 ";
            }
            else {
                cout << Board[i][j].bomb_num << ' ';
            }
        }
        cout << "\n";
    }

    }

bool Minesweeper::isBomb(const int row, const int col) {return Board[row][col].bomb == 1;}

bool Minesweeper::isEmpty(const int row, const int col) {return 0 == Board[row][col].bomb_num;}

bool Minesweeper::isVisible(const int row, const int col) {return Board[row][col].visible;}

bool Minesweeper::done() {
    for (int i = 1; i < SIZE + 1; ++i) {
        for (int j = 1; j < SIZE + 1; ++j) {
            if (!isVisible(i, j) && !isBomb(i, j)) return false;
        }
    }
    return true;
}

bool Minesweeper::validRow(const int row) {
    return row > 0 && row < SIZE + 1;
}

bool Minesweeper::validCol(const int col) {
    return col > 0 && col < SIZE + 1;
}

bool Minesweeper::play(const int row, const int col) {
    if (isBomb(row, col)) return false;
    if (!isEmpty(row, col)) {
        enVisible(row, col);
        return true;
    }
    //isempty
    if (isEmpty(row, col)) {
        vector<coordinate> todo_list;
        todo_list.push_back((struct coordinate){row, col});
        while (!todo_list.empty()){
            auto current = todo_list.back();
            todo_list.pop_back();
            if (isVisible(current.row, current.col)) continue;
            enVisible(current.row, current.col);
            for (int i = -1; i <= 1; ++i) {
                for (int j = -1; j <= 1; ++j) {
                    if(validRow(current.row + i) && validCol(current.col + j) && isEmpty(current.row,current.col)) {
                        if (!(i == 0 && j == 0)) {
                            if (!isVisible(current.row + i, current.col + j))
                                todo_list.push_back((struct coordinate) {current.row + i, current.col + j});
                        }
                    }
                }
            }
        }
    }
    return true;

}

void Minesweeper::enVisible(const int row, const int col) {
    Board[row][col].visible = true;
}

void Minesweeper::flag(const int row, const int col) {
    Board[row][col].flag = !Board[row][col].flag;
}

bool Minesweeper::isflag(const int row, const int col) {
    return Board[row][col].flag;
}


