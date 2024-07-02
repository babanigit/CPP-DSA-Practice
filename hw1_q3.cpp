#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double amountDue, amountReceived;

    cout << "Enter the amount due in dollars: ";
    cin >> amountDue; // product amount
    cout << "Enter the amount received in dollars: ";
    cin >> amountReceived; // amount received

    // using multiply round to remove the "."
    int duePennies = round(amountDue * 100);
    cout << duePennies << endl;
    int receivedPennies = round(amountReceived * 100);
    cout << receivedPennies << endl;

    // Calculate change in pennies
    int changePennies = receivedPennies - duePennies;
    // cout << "change pennies after rp - dp : " << changePennies << endl;

    // calculating the changes
    int dollars = changePennies / 100;
    changePennies %= 100;
    // cout << "change pennies 1 : " << changePennies << endl;

    int quarters = changePennies / 25;
    changePennies %= 25;
    // cout << "change pennies 2 : " << changePennies << endl;

    int dimes = changePennies / 10;
    changePennies %= 10;
    // cout << "change pennies 3 : " << changePennies << endl;

    int nickels = changePennies / 5;
    int pennies = changePennies % 5;

    // Output the result in the specified format
    cout << fixed << setprecision(2);
    cout << " Amount due : $" << amountDue << endl;
    cout << " Amount received : $" << amountReceived << endl;
    cout << endl;

    cout << " Change given :" << endl;
    cout << " dollars -> " << dollars << endl;
    cout << " quarters -> " << quarters << endl;
    cout << " dimes -> " << dimes << endl;
    cout << " nickels -> " << nickels << endl;
    cout << " pennies -> " << pennies << endl;

    return 0;
}
