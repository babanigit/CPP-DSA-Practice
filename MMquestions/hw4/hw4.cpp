#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

// Function definitions

void basic_arith(int a, int b) {
    cout << "The specified ints were : " << a << " and " << b << endl;
    cout << "Their sum is : " << (a + b) << endl;
    cout << "Their product is : " << (a * b) << endl;
    cout << "Their average is : " << ((a + b) / 2.0) << endl;
    cout << "The maximum of the two numbers is : " << max(a, b) << endl;
    cout << "The minimum of the two numbers is : " << min(a, b) << endl;
}

bool leap_year(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

void capitalize(string& s) {
    for (char& c : s) {
        if (c >= 'a' && c <= 'z') {
            c -= ('a' - 'A'); // Convert lowercase to uppercase
        }
    }
}

vector<int> concatenate(const vector<int>& v1, const vector<int>& v2) {
    vector<int> result = v1; // Copy first vector
    result.insert(result.end(), v2.begin(), v2.end()); // Append second vector
    return result;
}

void reverse(vector<int>& v) {
    std::reverse(v.begin(), v.end());
}

double get_double(const string& prompt) {
    double value;
    cout << prompt;
    while (!(cin >> value)) {
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore bad input
        cout << "Invalid input. Please enter a valid number: ";
    }
    return value;
}

string new_capitalized_version(string s) {
    capitalize(s); // Use the capitalize function defined earlier
    return s; // Return the modified string
}

bool is_magic_square(const vector<vector<int>>& square) {
    size_t n = square.size();
    if (n == 0 || square[0].size() != n) return false; // Check if it's a square

    vector<bool> used(n * n + 1, false); // Track numbers 1 through N^2

    int magic_sum = n * (n * n + 1) / 2;

    // Check rows
    for (const auto& row : square) {
        if (accumulate(row.begin(), row.end(), 0) != magic_sum) return false;
        for (int num : row) {
            if (num < 1 || num > n * n || used[num]) return false;
            used[num] = true;
        }
    }

    // Check columns
    for (size_t col = 0; col < n; ++col) {
        int sum = 0;
        for (size_t row = 0; row < n; ++row) {
            sum += square[row][col];
        }
        if (sum != magic_sum) return false;
    }

    // Check diagonals
    int diag1_sum = 0, diag2_sum = 0;
    for (size_t i = 0; i < n; ++i) {
        diag1_sum += square[i][i];
        diag2_sum += square[i][n - i - 1];
    }

    if (diag1_sum != magic_sum || diag2_sum != magic_sum) return false;

    return all_of(used.begin() + 1, used.end(), [](bool b) { return b; });
}
