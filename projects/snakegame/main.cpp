#include "game.h"
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed random number generator

    Setup();

    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100); // Sleep to slow down the game
    }

    cout << "Game Over! Your score was " << score << endl;
    return 0;
}
