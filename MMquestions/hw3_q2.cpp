

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Prompt user for input
    cout << "Enter an integer between 1 and 2147483647 (inclusive): ";

    unsigned int number;
    cin >> number;

    if (number >= 1 && number <= 2147483647)
    {
        // Print binary representation
        cout << "The binary representation of " << number << " is: ";

        // Calculate binary representation
        string binary;
        if (number == 0)
        {
            binary = "0";
        }
        else
        {
            while (number > 0)
            {
                binary = (number % 2 == 0 ? "0" : "1") + binary;
                number /= 2;
            }
        }

        cout << binary << endl;
    }
    else if (number == 0)
    {
        // Handle case when user types 0
        cout << "The integer you typed is not in the specified range." << endl;
    }
    else
    {
        // Handle case when number is outside the specified range
        cout << "The integer you typed is outside the specified range." << endl;
        // Still calculate binary representation
        cout << "The binary representation of " << number << " is: ";

        string binary;
        while (number > 0)
        {
            binary = (number % 2 == 0 ? "0" : "1") + binary;
            number /= 2;
        }

        cout << binary << endl;
    }

    return 0;
}
