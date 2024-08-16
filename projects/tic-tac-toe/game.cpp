#include "game.h"

vector<vector<Player>> board(SIZE, vector<Player>(SIZE, NONE));
Player currentPlayer;
bool gameOver;

void Setup() {
    currentPlayer = PLAYER1;
    gameOver = false;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            board[i][j] = NONE;
        }
    }
}

void Draw() {
    system("cls"); // Clear the console
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == PLAYER1)
                cout << " X ";
            else if (board[i][j] == PLAYER2)
                cout << " O ";
            else
                cout << " . ";
            if (j < SIZE - 1)
                cout << "|";
        }
        cout << endl;
        if (i < SIZE - 1) {
            cout << "---+---+---" << endl;
        }
    }
}

void Input() {
    int row, col;
    cout << "Player " << (currentPlayer == PLAYER1 ? "1" : "2") << "'s turn. Enter row and column (0-2): ";
    cin >> row >> col;
    if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == NONE) {
        board[row][col] = currentPlayer;
    } else {
        cout << "Invalid move. Try again." << endl;
        Input(); // Retry input if invalid
    }
}

void Logic() {
    if (CheckWin()) {
        cout << "Player " << (currentPlayer == PLAYER1 ? "1" : "2") << " wins!" << endl;
        gameOver = true;
    } else if (CheckDraw()) {
        cout << "It's a draw!" << endl;
        gameOver = true;
    } else {
        currentPlayer = (currentPlayer == PLAYER1) ? PLAYER2 : PLAYER1;
    }
}

bool CheckWin() {
    // Check rows and columns
    for (int i = 0; i < SIZE; ++i) {
        if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
            (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
        (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {
        return true;
    }
    return false;
}

bool CheckDraw() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == NONE)
                return false;
        }
    }
    return true;
}
