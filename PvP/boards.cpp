#include "boards.h"
#include <iostream>

using namespace std;

void resetBoard(char board[3][3]){
    char cell = '1';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = cell;
            cell++; 
        }        
    }    
}

void makeBoard(char board[3][3]){
    cout<<'\n';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<< board[i][j];
            if (j < 2)
            {
                cout << " | ";
            } 
        }
        cout << endl;
        if (i < 2)
        {
            cout << "--|---|--\n";
        }
    }
    cout << '\n';
    
}