
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    // total 12 * 9 alphabet including spaces
    const string months = "January  February March    April    May      June     July     August   SeptemberOctober  November December ";

    cout << "Please enter an integer between 1 and 12: ";
    int monthNumber;
    cin >> monthNumber;

    if (monthNumber <= 12 && monthNumber >= 1){

        string month = months.substr((monthNumber - 1) * 9, 9); // 9 cause september has higest alphabet
        cout << "The corresponding month is: " << month << endl;
    }else{
        
        cout << "invalid!" << endl;
    }

    return 0;
}
