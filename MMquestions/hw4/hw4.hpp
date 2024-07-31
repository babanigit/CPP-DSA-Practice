//
//  hw4.hpp
//  Created by Michael Andrews for 10A students on 7/25/24.
//

#ifndef hw4_hpp
#define hw4_hpp


#include <vector>     // std::vector
#include <iostream>   // std::cout, std::cin
#include <algorithm>  // std::max, std::min
#include <string>     // std::string
#include <utility>    // std::swap


/**
 A procedure which prints the ints
 contained within a vector of ints
 separated by a comma and a space,
 followed by a newline character.

 @param v : the vector of ints whose elements are printed
*/
void print(const std::vector<int>& v);


/**
 A procedure which prints its two arguments,
 their sum, their product, their average,
 their maximum and minimum
 (as long as overflow is not encountered).

 @param i1 : the first int
 @param i2 : the second int
*/
void basic_arith(int i1, int i2);


/**
 A pure function which indicates
 whether a year is a leap year or not.

 @param y : the year
 @return true if y is a leap year
         false if y is not a leap year
*/
bool leap_year(int y);


/**
 A procedure which mutates its argument string
 by transforming each lowercase alphabetic character
 to the corresponding uppercase alphabetic character.
 Other characters are not changed.

 @param s : the string to capitalize
*/
void capitalize(std::string& s);


/**
 A pure function which returns the concatenation of two vectors of ints.
 If the first argument passed to 'concatenate' stores 1 3 5 and
 the second argument passed to 'concatenate' stores 2 4 6 8,
 then a vector storing 1 3 5 2 4 6 8 is returned.

 @param v1 : the first vector
 @param v2 : the second vector
 @return a vector
         containing the elements of v1
         followed by the elements of v2
*/
std::vector<int> concatenate(const std::vector<int>& v1, const std::vector<int>& v2);


/**
 A procedure which reverses the elements in a vector of ints.
 If a vector containing 1 3 5 2 4 6 8 is passed to the function,
 after the function call it contains 8 6 4 2 5 3 1.

 @param v : the vector whose elements are reversed
*/
void reverse(std::vector<int>& v);


/**
 * A function (neither a pure function or a procedure) that
 *  - prints a specified prompt followed by a space,
 *  - extracts non-whitespace characters from the
 *    input buffer and interprets them as a double,
 *  - returns this double.
 * This function makes no attempt to handle bad user input.
 *
 * @param prompt : the prompt to print followed by a space
 * @return the double obtained by
 *         interpreting characters in the input buffer
*/
double get_double(const std::string& prompt);


/**
 A pure function that returns a string
 which is obtained from the parameter
 by transforming each lowercase alphabetic character
 to the corresponding uppercase alphabetic character
 (other characters are not changed).

 @param s : a string
 @return the result of applying 'capitalize' to s
*/
std::string new_capitalized_version(std::string s);


/**
 * Says whether a vector of vector of ints
 * is a magic square or not.
 *
 * The conditions to be a magic square are...
 *   - it is a square;
 *   - if square.size() == N, then it stores
 *     each of the numbers 1 through N^2 exactly once;
 *   - the sums of
 *      - the rows
 *      - the columns
 *      - both main diagonals
 *     are the same.
 *
 * For example, the following are magic squares...
 *
 *     8 3 4
 *     1 5 9
 *     6 7 2
 *
 *      2  7 14 11
 *      9 16  5  4
 *     15 10  3  6
 *      8  1 12 13
 *
 * ...and the following are NOT magic squares.
 *
 *     1
 *     2 3
 *
 *     5 5 5
 *     5 5 5
 *     5 5 5
 *
 * One can regard the 0x0 square as magic.
 *
 * @param square : a vector of vector of ints
 * @return true if 'square' is a magic square;
 *         false otherwise
*/
bool is_magic_square(const std::vector<std::vector<int>>& square);


#endif /* hw4_hpp */
