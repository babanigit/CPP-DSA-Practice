#include <iostream>
#include <sstream>
#include <vector>
#include <limits>

using namespace std;

int main()
{
    char choice;
    do
    {
        cout << "Enter a list of ints with a single space between each adjacent pair of ints..." << endl;
        string input;
        getline(cin, input); // Read entire line of input

        cout << "the line of string is is : " << input << endl;

        // Using stringstream to extract integers
        stringstream ss(input);

        cout << "after stringstream is : " << input << endl;

        vector<int> numbers;
        int num;

        // Read integers from stringstream
        while (ss >> num)
            numbers.push_back(num);

        // Determine maximum and minimum
        if (!numbers.empty())
        {
            int maxNum = numeric_limits<int>::min();
            int minNum = numeric_limits<int>::max();

            for (int number : numbers)
            {
                if (number > maxNum)
                    maxNum = number;
                if (number < minNum)
                    minNum = number;
            }

            cout << "The maximum of the ints you entered is " << maxNum << endl;
            cout << "The minimum of the ints you entered is " << minNum << endl;
        }
        else
            cout << "No integers were entered." << endl;

        // Ask if user wants to continue
        cout << "Continue? (y/n)" << endl;
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

    } while (choice == 'y');

    return 0;
}
