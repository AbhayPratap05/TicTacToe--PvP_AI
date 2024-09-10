#include <iostream>
#include "boards.h"
#include "move.h"
#include "checks.h"

using namespace std;

int main(){
    char board[3][3];
    char currentPlayer = 'X';
    bool gameOver = false;
    bool gameDraw = false;

    resetBoard(board);
    makeBoard(board);

    while (!gameOver && !gameOver)
    {
        playerMove(board, currentPlayer);
        makeBoard(board);
        if(checkWin(board, currentPlayer)){
            char restart;
            do
            {
                cout << "Do you want to restart? (Y/N): ";
                cin >> restart;
                if (restart == 'Y' || restart == 'y')
                {
                    resetBoard(board);
                    makeBoard(board);
                    gameOver = false;
                    break;
                }
                else if(restart == 'N' || restart == 'n')
                {
                    cout << "Thanks for playing!\n";
                    gameOver = true;
                    break;
                }
            } while (true);
        }

        if(checkDraw(board)){
            char restart;
            do
            {
                cout << "Do you want to restart? (Y/N): ";
                cin >> restart;
                if (restart == 'Y' || restart == 'y')
                {
                    resetBoard(board);
                    makeBoard(board);
                    gameOver = false;
                    break;
                }
                else if(restart == 'N' || restart == 'n')
                {
                    cout << "Thanks for playing!\n";
                    gameOver = true;
                    break;
                }
            } while (true);
        }
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    return 0;
    
}