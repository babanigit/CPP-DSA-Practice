
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{

    // getting number
    cout << "Enter an integer between 1,000 and 999,999 including the comma: ";
    string inputWithComma;
    cin >> inputWithComma;

    // finding comma postion
    int commaPostion = inputWithComma.rfind(',');

    // removing comma
    string numberWithoutComma = inputWithComma.substr(0, commaPostion) + inputWithComma.substr(commaPostion + 1);

    // converting string into int
    stringstream ss(numberWithoutComma);
    int numbers;
    ss >> numbers;

    // cout
    cout << "Actually, I don't like the comma. This is better: " << numbers << endl;

    return 0;
}
