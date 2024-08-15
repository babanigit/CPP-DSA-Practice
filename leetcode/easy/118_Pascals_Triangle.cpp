#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void printVector(const vector<vector<int>> &vec)
    {
        cout << "printing the vector --- "  <<endl;
        for (const auto &row : vec)
        {
            for (int val : row)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> prevRows;

        // Print initial state
        cout << "Initial prevRows:" << endl;
        printVector(prevRows);

        if (numRows == 0)
            return {};
        if (numRows == 1)
            return {{1}};

        prevRows = generate(numRows - 1);

        // Print state after recursion
        cout << "post prevRows:" << endl;
        printVector(prevRows);

        vector<int> newRow(numRows, 1); // Initialize with 'numRows' size, filled with 1

        for (int i = 1; i < numRows - 1; i++)
        {
            newRow[i] = prevRows.back()[i - 1] + prevRows.back()[i];
        }

        prevRows.push_back(newRow);

        // Print state after adding the new row
        cout << "Final prevRows:" << endl;
        printVector(prevRows);

        return prevRows;
    }
};

int main(int argc, char const *argv[])
{
    Solution Sol;

    int numRows = 5; // Example number of rows
    vector<vector<int>> result = Sol.generate(numRows);

    cout << "Generated Pascal's Triangle:" << endl;
    Sol.printVector(result);

    return 0;
}
