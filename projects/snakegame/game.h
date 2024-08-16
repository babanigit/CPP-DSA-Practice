#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include <conio.h> // For _kbhit() and _getch()
#include <windows.h> // For Sleep() function

using namespace std;

// Define the size of the game area
const int WIDTH = 20;
const int HEIGHT = 17;

// Define the directions
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
extern Direction dir;

// Snake structure
struct Snake {
    int x, y;
};

// Global variables
extern vector<Snake> snake;
extern int foodX, foodY;
extern int score;
extern bool gameOver;

// Function prototypes
void Setup();
void Draw();
void Input();
void Logic();

#endif // GAME_H
