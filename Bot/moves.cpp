#include "moves.h"
#include <iostream>

using namespace std;

void playerMove(char *board, char player){
    bool validMove = false;
    int playerMove;
    do
    {
        cout << "Enter the position to place the marker (1-9): ";
        cin >> playerMove;
        if (playerMove <=9 && playerMove >= 1 && board[playerMove-1] != 'X' && board[playerMove-1] != 'O')
        {
            board[playerMove-1] = player;
            validMove = true;
            break;
        }
        else{
            cout << "Invalid Marker Position!\n";
        }
        
    } while (!validMove);
    
}

void botMove(char *board, char bot){
    srand(time(0));
    int botMove;
    bool validMove = false;
    while (!validMove)
    {
        botMove = rand()%9;
        if (board[botMove] != 'X' && board[botMove] != 'O')
        {
            board[botMove] = bot;
            validMove = true;
        }
        
    }
    
    
}