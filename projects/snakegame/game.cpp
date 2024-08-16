#include "game.h"

Direction dir;
vector<Snake> snake;
int foodX, foodY;
int score;
bool gameOver;

void Setup() {
    gameOver = false;
    dir = STOP;
    snake.clear();
    snake.push_back({ WIDTH / 2, HEIGHT / 2 });
    score = 0;

    // Place the first food
    foodX = rand() % WIDTH;
    foodY = rand() % HEIGHT;
}

void Draw() {
    system("cls"); // Clear the console

    for (int i = 0; i < WIDTH + 2; ++i)
        cout << "#";
    cout << endl;

    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            if (x == 0)
                cout << "#";

            bool print = false;
            if (x == foodX && y == foodY) {
                cout << "*";
                print = true;
            }

            for (const auto& s : snake) {
                if (s.x == x && s.y == y) {
                    cout << "O";
                    print = true;
                    break;
                }
            }

            if (!print)
                cout << " ";

            if (x == WIDTH - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < WIDTH + 2; ++i)
        cout << "#";
    cout << endl;

    cout << "Score:" << score << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                if (dir != RIGHT) dir = LEFT;
                break;
            case 'd':
                if (dir != LEFT) dir = RIGHT;
                break;
            case 'w':
                if (dir != DOWN) dir = UP;
                break;
            case 's':
                if (dir != UP) dir = DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    }
}

void Logic() {
    int prevX = snake[0].x;
    int prevY = snake[0].y;
    int prev2X, prev2Y;
    snake[0].x += (dir == RIGHT) - (dir == LEFT);
    snake[0].y += (dir == DOWN) - (dir == UP);

    if (snake[0].x >= WIDTH) snake[0].x = 0;
    else if (snake[0].x < 0) snake[0].x = WIDTH - 1;
    if (snake[0].y >= HEIGHT) snake[0].y = 0;
    else if (snake[0].y < 0) snake[0].y = HEIGHT - 1;

    for (int i = 1; i < snake.size(); ++i) {
        if (snake[i].x == snake[0].x && snake[i].y == snake[0].y)
            gameOver = true;
    }

    if (snake[0].x == foodX && snake[0].y == foodY) {
        score += 10;
        foodX = rand() % WIDTH;
        foodY = rand() % HEIGHT;
        snake.push_back({ prevX, prevY });
    }

    for (int i = 1; i < snake.size(); ++i) {
        swap(prevX, snake[i].x);
        swap(prevY, snake[i].y);
    }
}
