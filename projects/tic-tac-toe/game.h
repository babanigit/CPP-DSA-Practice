#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>

using namespace std;

// Define the size of the board
const int SIZE = 3;

// Define player symbols
enum Player { NONE = 0, PLAYER1, PLAYER2 };

// Global variables
extern vector<vector<Player>> board;
extern Player currentPlayer;
extern bool gameOver;

// Function prototypes
void Setup();
void Draw();
void Input();
void Logic();
bool CheckWin();
bool CheckDraw();

#endif // GAME_H
