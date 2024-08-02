#include "hw4.hpp"
using namespace std;

int main()
{

    /*
      basic_arith(100, 101);
        cout << endl;
    */

    /*
        vector<int> years { 2023, 2024, 2100, 2000 };

        for (size_t i = 0, N = years.size(); i < N; ++i) {
            if (leap_year(years[i])) {
                cout << years[i] << " is a leap year" << endl;
            }
            else {
                cout << years[i] << " is not a leap year" << endl;
            }
        }
        cout << endl;
    */

    string s = "abc_DEF_&&_hij_??!!";
    // string s = "abc_DEF_&&_hij_\\?\\?!!"; // Escaped version

    capitalize(s);
    cout << s << endl
         << endl;

    // vector<int> v1{1, 3, 5};
    // vector<int> v2{2, 4, 6, 8};
    // vector<int> v3 = concatenate(v1, v2);

    // print(v3);
    // reverse(v3);
    // print(v3);
    // cout << endl;

    /*
        double fave_number = get_double("What is your favorite number?");

        // What is your favorite number?
        // will be printed to the console followed by a space.

        // The user will have a chance to type input.

        // If they type 8.8 and hit ENTER,
        // then fave_number will be assigned a value of 8.8.

        cout << fave_number << " is my favorite too!" << endl << endl;
    */

    /*
        string str = "abc_DEF_&&_hij_??!!";
        string STR = new_capitalized_version(str);

        cout << str << endl;
        cout << STR << endl;
        cout << endl;
    */

    /*

        vector<vector<int>> square1 = {{8, 3, 4},
                                    {1, 5, 9},
                                    {6, 7, 2}};

     vector<vector<int>> square2 = {{2, 7, 14, 11},
                                    {9, 16, 5, 4},
                                    {15, 10, 3, 6},
                                    {8, 1, 12, 13}};

     vector<vector<int>> square3 = {{1},
                                    {2, 3}};

     vector<vector<int>> square4 = {{5, 5, 5},
                                    {5, 5, 5},
                                    {5, 5, 5}};

     cout << boolalpha;

     cout << is_magic_square(square1) << endl;
     cout << is_magic_square(square2) << endl;
     cout << is_magic_square(square3) << endl;
     cout << is_magic_square(square4) << endl;

     return 0;
    */
}
