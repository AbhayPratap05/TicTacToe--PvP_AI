#include <iostream>
#include <ctime>
#include "makeBoard.h"
#include "moves.h"
#include "checks.h"

using namespace std;

int main(){
    char board[] = {49,50,51,52,53,54,55,56,57};
    char choice, player, bot;
    bool gameOver = false;
    bool gameDraw = false;

    cout << "Choose your marker (X | O): ";
    cin >> choice;
    if (choice == 'X' || choice == 'x')
    {
        player = 'X';
        bot = 'O';
    }
    else if (choice == 'O' || choice == 'o')
    {
        player = 'O';
        bot = 'X';
    }
    else{
        cout<< "Error 404!\n";
        return 0;
    }
    
    makeBoard(board);
    while (!gameOver && !gameDraw)
    {
        playerMove(board, player);
        makeBoard(board);
        if (checkWinner(board, player, bot))
        {
            gameOver = true;
            break;
        }
        if (checkDraw(board)){
            gameDraw = true;
            break;
        }

        botMove(board, bot);
        makeBoard(board);
        if (checkWinner(board, player, bot))
        {
            gameOver = true;
            break;
        }
        if (checkDraw(board)){
            gameDraw = true;
            break;
        }
    }
    return 0;
    
}

