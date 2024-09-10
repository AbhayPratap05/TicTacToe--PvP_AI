#include "checks.h"
#include <iostream>

using namespace std;

bool checkWin(char board[3][3], char currentPlayer){
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            cout<< "Player " << currentPlayer << " Wins!\n";
            return true;
        }
        else if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            cout << "Player " << currentPlayer << " Wins!\n";
            return true;
        }
        else if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        {
            cout << "Player " << currentPlayer << " Wins!\n";
            return true;
        }
        else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            cout << "Player " << currentPlayer << " Wins!\n";
            return true;
        }    
    }
    return false;

}

bool checkDraw(char board[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return false;
            }
        }
    }
    cout << "Its a Draw!";
    return true;

}