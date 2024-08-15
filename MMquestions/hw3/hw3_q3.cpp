#include <iostream>
#include <sstream>
#include <vector>
#include <limits> // min(), max()

using namespace std;

int main()
{
    char choice;
    do
    {
        string input;
        vector<int> numbers;
        int num;
        int maxNum = numeric_limits<int>::min();
        int minNum = numeric_limits<int>::max();

        cout << "Enter a list of ints with a single space between each adjacent pair of ints..." << endl;
        getline(cin, input); // Read entire line of input

        stringstream ss(input); // Using stringstream to extract integers

        // Read integers from stringstream
        while (ss >> num)
        {
            numbers.push_back(num);
            // cout << " the num is : " << num << endl;
        }

        // Determine maximum and minimum
        if (!numbers.empty())
        {
            for (int number : numbers) // going through each vector
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
