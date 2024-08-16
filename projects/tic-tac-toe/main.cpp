#include "game.h"

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
    }
    cout << "Game Over!" << endl;
    return 0;
}
