
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{

    cout << "Enter an integer between 1,000 and 999,999 including the comma: ";
    string inputWithComma;
    cin >> inputWithComma;

    int commaPostion = inputWithComma.rfind(',');

    // cout << commaPostion << endl;

    string numberWithoutComma= inputWithComma.substr(0,commaPostion) + inputWithComma.substr(commaPostion+1);

    cout << "Actually, I don't like the comma. This is better: " << numberWithoutComma << endl;

    return 0;

}
