# TicTacToe--PvP_AI
This repository contains two versions of the Tic-Tac-Toe game, both implemented in C++. Each version is located in its respective folder:
Player vs Player (PvP) Mode – A classic Tic-Tac-Toe game where two human players can play against each other.
Player vs AI Mode – A Tic-Tac-Toe game where a human player competes against a basic AI bot that makes random moves.

Features
1. Player vs Player Mode (PvP)
The game is played on a 3x3 grid using 2D arrays.
Two players take turns placing their markers (X or O) on the board.
Replay Functionality: After the game finishes, players have the option to replay without restarting the program.

2. Player vs AI Mode
The game is also played on a 3x3 grid.
One player competes against a simple AI bot.
The AI bot uses a random number generator to select its moves, making it an unpredictable opponent.

How to Run
Clone the repository:
git clone https://github.com/YourUsername/TicTacToeGame.git
cd P2-TicTacToe

To play Player vs Player mode:
cd PvP
g++ .\main.cpp .\move.cpp .\checks.cpp .\boards.cpp -o pvp.exe
pvp.exe

To play Player vs AI mode:
cd Bot
g++ .\main.cpp .\makeBoard.cpp .\moves.cpp .\checks.cpp -o bot.exe
bot.exe
