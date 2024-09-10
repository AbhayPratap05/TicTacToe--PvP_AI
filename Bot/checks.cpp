#include "checks.h"
#include <iostream>

using namespace std;

bool checkWinner(char *board, char player, char bot){
    if (board[0] == board[1] && board[1] == board[2])
    {
        board[0] == player ? cout<< "You Won!\n" : cout<< "You Lose!\n";
    }
    else if(board[3] == board[4] && board[4] == board[5]){
        board[3] == player ? std::cout << "You Won!\n" : std::cout << "You Lose!\n";
    }
    else if(board[6] == board[7] && board[7] == board[8]){
        board[6] == player ? std::cout << "You Won!\n" : std::cout << "You Lose!\n";
    }
    else if(board[0] == board[3] && board[3] == board[6]){
        board[0] == player ? std::cout << "You Won!\n" : std::cout << "You Lose!\n";
    }
    else if(board[1] == board[4] && board[4] == board[7]){
        board[1] == player ? std::cout << "You Won!\n" : std::cout << "You Lose!\n";
    }
    else if(board[2] == board[5] && board[5] == board[8]){
        board[2] == player ? std::cout << "You Won!\n" : std::cout << "You Lose!\n";
    }
    else if(board[0] == board[4] && board[4] == board[8]){
        board[0] == player ? std::cout << "You Won!\n" : std::cout << "You Lose!\n";
    }
    else if(board[2] == board[4] && board[4] == board[6]){
        board[2] == player ? std::cout << "You Won!\n" : std::cout << "You Lose!\n";
    }
    else{
        return false;
    }
    return true;
    
}

bool checkDraw(char *board){
    for (int i = 0; i < 9; i++)
    {
        if(board[i] != 'X' && board[i] != 'O')
        {
            return false;
        }
    }
    cout << "Its a Draw!\n";
    return true;
    
}