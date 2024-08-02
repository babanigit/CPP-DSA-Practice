#include "hw4.hpp"
using namespace std;

// print the array of vector
void print(const vector<int> &v)
{
    for (size_t i = 0, N = v.size(); i < N; ++i)
    {
        cout << v[i];
        if (i < N - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

// basic arithmetics
void basic_arith(int i1, int i2)
{
    cout << "The specified ints were: " << i1 << " and " << i2 << endl;
    cout << "Their sum is: " << (i1 + i2) << endl;
    cout << "Their product is: " << (i1 * i2) << endl;
    cout << "Their average is: " << (i1 + i2) / 2.0 << endl;
    cout << "The maximum of the two numbers is: " << max(i1, i2) << endl;
    cout << "The minimum of the two numbers is: " << min(i1, i2) << endl;
}

// leap year
bool leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// capitalize function
void capitalize(string &s)
{
    for (char &character : s)
    {
        if (islower(character))
        {
            character = toupper(character);
        }
    }
}

// concatenate
vector<int> concatenate(const vector<int> &v1, const vector<int> &v2)
{
    vector<int> result(v1);
    result.insert(result.end(), v2.begin(), v2.end());
    return result;
}

// reverse the array of vector
void reverse(vector<int> &v)
{
    size_t trail = v.size();
    for (size_t i = 0; i < trail / 2; ++i)
    {
        swap(v[i], v[trail - 1 - i]); // swapping
    }
}

// get double
double get_double(const string &prompt)
{
    cout << prompt << " ";
    double value;
    cin >> value;
    return value;
}

//
string new_capitalized_version(string s)
{
    capitalize(s); // Reuse the fun
    return s;
}

// square
bool is_magic_square(const vector<vector<int>> &square)
{
    size_t square_size = square.size();
    if (square_size == 0)
        return true; // Empty square is considered magic

    // Check if square is square
    for (const auto &row : square)
    {
        if (row.size() != square_size)
            return false; // Not square
    }

    // Check for unique numbers from 1 to square_size^2
    vector<bool> used(square_size * square_size + 1, false);
    for (const auto &row : square)
    {
        for (int num : row)
        {
            if (num < 1 || num > square_size * square_size || used[num])
            {
                return false; // Out of range or duplicate
            }
            used[num] = true;
        }
    }

    // total
    int total = square_size * (square_size * square_size + 1) / 2;

    // Check row sums
    for (const auto &row : square)
    {
        int sum = 0;
        for (int num : row)
        {
            sum += num;
        }
        if (sum != total)
            return false;
    }

    // Check column sums
    for (size_t col = 0; col < square_size; ++col)
    {
        int sum = 0;
        for (size_t row = 0; row < square_size; ++row)
        {
            sum += square[row][col];
        }
        if (sum != total)
            return false;
    }

    // Check sums
    int dg1 = 0, dg2 = 0;
    for (size_t i = 0; i < square_size; ++i)
    {
        dg1 += square[i][i];                   // Main diagonal
        dg2 += square[i][square_size - 1 - i]; // Secondary diagonal
    }
    if (dg1 != total || dg2 != total)
        return false;

    return true; // All checks passed
}