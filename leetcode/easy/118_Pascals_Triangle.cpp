
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
private:
    /* data */
public:
    // Solution(/* args */);
    // ~Solution();
    void fun()
    {
        cout << "hello geneate for class solution " << endl;
    }

    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> prevRows;

        if (numRows == 0)
            return {};
        if (numRows == 1)
            return {{1}};

        prevRows = generate(numRows - 1);

        vector<int> newRow(numRows, 1); // Initialize with 'numRows' size, filled with 1
        
        for (int i = 1; i < numRows - 1; i++)
        {
            newRow[i] = prevRows.back()[i - 1] + prevRows.back()[i];
        }

        prevRows.push_back(newRow);

        return prevRows;
    }
};

int main(int argc, char const *argv[])
{

    Solution Sol;

   int numRows = 5; // Example number of rows
    vector<vector<int>> result = Sol.generate(numRows);
    /* code */
    return 0;
}
