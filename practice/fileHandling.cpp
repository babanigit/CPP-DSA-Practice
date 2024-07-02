
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile)
    {
        cerr << "error opening input file " << endl;
        return 1;
    }

    std::string line;

    while (getline(inputFile, line))
    {
        outputFile << line << endl;
    }

    cout << "file copied successfully" << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
