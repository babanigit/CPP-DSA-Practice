#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Prompt user for input
    cout << "Enter an integer between 1 and 2147483647 (inclusive): ";
    unsigned int number; // we holding postive number
    cin >> number;

    if (number >= 1 && number <= 2147483647)
    {
        // Print binary representation
        cout << "The binary representation of " << number << " is: ";

        // Calculate binary representation
        string binary;
        if (number == 0)
            binary = "0";
        else
        {
            while (number > 0)
            {
                // algorithm //if true then "0" or else "1"
                binary = (number % 2 == 0 ? "0" : "1") + binary; // "%" gives u remening number after dividing in reminder
                number /= 2; // dividing by 2 , "/" gives u reminder
            }
        }
        cout << binary << endl;
    }
    else
        cout << "The integer you typed is not in the specified range." << endl;
        
    return 0;
}
