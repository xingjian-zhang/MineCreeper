#include <iostream>
#include "Minesweeper.h"

using namespace std;

//test display
/*int main(){
    Minesweeper sweeper;
    sweeper.display(true);
    cout << "#bomb = " << sweeper.bomb_num;
    return 0;
}*/

int main() {
    Minesweeper sweeper;
// Continue until only invisible cells are bombs
    while (!sweeper.done()) {
        sweeper.display(false); // display board without bombs
        int row_sel = -1, col_sel = -1;
        while (row_sel == -1) {
// Get a valid move
            int r, c;
            cout << "row? ";
            cin >> r;

            cout << "col? ";
            cin >> c;
            if (!sweeper.validRow(r)) {
                cout << "Row out of bounds\n";
                continue;
            }
            if (!sweeper.validCol(c)) {
                cout << "Column out of bounds\n";
                continue;
            }
            if (sweeper.isVisible(r,c)) {
                cout << "Square already visible\n";
                continue;
            }
            row_sel = r;
            col_sel = c;
        }
// Set selected square to be visible. May effect other cells.
        if (!sweeper.play(row_sel,col_sel)) {
            cout << "Sorry, you died..\n";
            sweeper.display(true); // Final board with bombs shown
            exit(0);
        }
    }
// Ah! All invisible cells are bombs, so you won!
    cout << "You won!!!!\n";
    sweeper.display(true); // Final board with bombs shown
}
