
#include <iostream>
#include <string>
using namespace std;

// military to minutes
int MTM(const string &timeData)
{
    // it will extract the first 2 substring
    int hours = stoi(timeData.substr(0, 2)); // stoi = string to interger
    // cout << hours << endl;

    // it extract the two substring , excluding first 2
    int minutes = stoi(timeData.substr(2, 2));
    // cout << minutes << endl;

    return hours * 60 + minutes;
}

int main()
{
    string time1, time2;

    cout << "Enter the first military formatted time : ";
    cin >> time1;
    cout << "Enter the second military formatted time : ";
    cin >> time2;

    int minutes1 = MTM(time1);
    int minutes2 = MTM(time2);

    int difference = minutes2 - minutes1;

    if (difference < 0)
        difference += 24 * 60; // add 24 hours to negative number

    cout << " the difference is : " << difference << endl;
    // Calculate hours and minutes from total difference in minutes
    int hours = difference / 60; // it will give you the reminder number
    int mins = difference % 60;  // it will give you the the remaining number after divide

    cout << "Difference between the times : " << hours << " hours " << mins << " minutes." << endl;
    return 0;
}
