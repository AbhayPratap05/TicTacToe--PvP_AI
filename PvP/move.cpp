#include "move.h"
#include <iostream>

using namespace std;

void playerMove(char board[3][3], char currentPlayer){
    bool validMove = false;
    int row, column;
    do
    {
        cout<< "Enter the row and coulumn to set the marker: ";
        cin >> row >> column;
        if (row <=3 && row >= 1 && column <=3 && column >=1 && board[row-1][column-1] != 'X' && board[row-1][column-1] != 'O')
        {
            board[row-1][column-1] = currentPlayer;
            validMove = true;
            break;
        }
        
    } while (!validMove);
    
}