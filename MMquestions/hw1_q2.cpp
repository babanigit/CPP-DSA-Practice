
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// military to minutes
int MTM(const string &timeData)
{

    int hours = (timeData[0]-'0') * 10 + (timeData[1] - '0');
    int minutes =(timeData[2] -'0') * 10 +(timeData[3]- '0');

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

    // Calculate hours and minutes from total difference in minutes
    int hours = difference / 60; // it will give you the reminder number
    int mins = difference % 60;  // it will give you the the remaining number after divide

    cout << "Difference between the times : " << hours << " hours " << mins << " minutes." << endl;
    return 0;
}
