
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    // getting number into string cause we have comma
    cout << "Enter an integer between 1,000 and 999,999 including the comma: ";
    string inputWithComma;
    cin >> inputWithComma;

    // finding comma postion using index ( using size_t to get unsigned or postive index for more safety)
    size_t commaPostion = inputWithComma.find(',');

    // removing comma from the string
    string numberWithoutComma = inputWithComma.substr(0, commaPostion) + inputWithComma.substr(commaPostion+1);
    
    // converting string into int (good practice)
    stringstream ss(numberWithoutComma);
    int numbers;
    ss >> numbers;

    // cout
    cout << "Actually, I don't like the comma. This is better: " << numbers << endl;

    return 0;
}
