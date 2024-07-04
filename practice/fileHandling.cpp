
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    // std::
    ifstream inputFile("txtfile/input.txt");
    ofstream outputFile("txtfile/output.txt");

    if (!inputFile)
    {
        cerr << "[error]: error opening input file " << endl;
        return 1;
    }

    // std::
    string line;

    // while loop and get line will read each and every line of the file
    while (getline(inputFile, line))
    {
        cout << " the line is : " << line << endl;
        outputFile << line << endl; // it will add line data lines and end with the endl
    }

    cout << "file copied successfully" << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
