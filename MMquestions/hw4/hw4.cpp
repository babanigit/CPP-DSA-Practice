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

// basic arithmatics
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
    for (char &c : s)
    {
        if (islower(c))
        {
            c = toupper(c);
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
    size_t N = v.size();
    for (size_t i = 0; i < N / 2; ++i)
    {
        swap(v[i], v[N - 1 - i]); // Swapping the elements
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

string new_capitalized_version(string s)
{
    capitalize(s); // Reuse the capitalize function
    return s;      // Return the capitalized string
}

bool is_magic_square(const vector<vector<int>> &square)
{
    size_t N = square.size();
    if (N == 0)
        return true; // Empty square is considered magic

    // Check if square is square
    for (const auto &row : square)
    {
        if (row.size() != N)
            return false; // Not square
    }

    // Check for unique numbers from 1 to N^2
    vector<bool> used(N * N + 1, false);
    for (const auto &row : square)
    {
        for (int num : row)
        {
            if (num < 1 || num > N * N || used[num])
            {
                return false; // Out of range or duplicate
            }
            used[num] = true;
        }
    }

    // Check magic total
    int magic_total = N * (N * N + 1) / 2;

    // Check row sums
    for (const auto &row : square)
    {
        int sum = 0;
        for (int num : row)
        {
            sum += num;
        }
        if (sum != magic_total)
            return false;
    }

    // Check column sums
    for (size_t col = 0; col < N; ++col)
    {
        int sum = 0;
        for (size_t row = 0; row < N; ++row)
        {
            sum += square[row][col];
        }
        if (sum != magic_total)
            return false;
    }

    // Check diagonal sums
    int diag1 = 0, diag2 = 0;
    for (size_t i = 0; i < N; ++i)
    {
        diag1 += square[i][i];         // Main diagonal
        diag2 += square[i][N - 1 - i]; // Secondary diagonal
    }
    if (diag1 != magic_total || diag2 != magic_total)
        return false;

    return true; // All checks passed
}
