

#include <iostream>
#include <string>
using namespace std;

int main()
{

    cout << "Please enter an integer between 1 and 12: ";
    int monthNumber;
    cin >> monthNumber;
    string monthName;

    if (monthNumber <= 12 && monthNumber >= 1)
    {
        switch (monthNumber)
        {
        case 1:
            monthName = "January";
            break;
        case 2:
            monthName = "February";
            break;
        case 3:
            monthName = "March";
            break;
        case 4:
            monthName = "April";
            break;
        case 5:
            monthName = "May";
            break;
        case 6:
            monthName = "June";
            break;
        case 7:
            monthName = "July";
            break;
        case 8:
            monthName = "August";
            break;
        case 9:
            monthName = "September";
            break;
        case 10:
            monthName = "October";
            break;
        case 11:
            monthName = "November";
            break;
        case 12:
            monthName = "December";
            break;
        }
        // default:
        // break;

        cout << " The corresponding month is : " << monthName << endl;
    }
    else
    {
        cout << " invalid! " << endl;
    }

    return 0;
}