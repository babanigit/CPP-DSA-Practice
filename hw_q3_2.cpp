#include <iostream>
#include <iomanip> // For std::setprecision and std::fixed
using namespace std;

int main() {
    // Prompt user for amount due and amount received
    double amountDue, amountReceived;
    cout << "Enter the amount due in dollars: ";
    cin >> amountDue;
    cout << "Enter the amount received in dollars: ";
    cin >> amountReceived;

    // Calculate the change due
    double changeDue = amountReceived - amountDue;

    // Convert changeDue to cents to avoid floating-point precision issues
    int changeInCents = static_cast<int>(changeDue * 100 + 0.5);

    // Calculate dollars, quarters, dimes, nickels, and pennies
    int dollars = changeInCents / 100;
    changeInCents %= 100;
    int quarters = changeInCents / 25;
    changeInCents %= 25;
    int dimes = changeInCents / 10;
    changeInCents %= 10;
    int nickels = changeInCents / 5;
    int pennies = changeInCents % 5;

    // Output the results with specific formatting
    cout << fixed << setprecision(2); // Ensure two decimal places for dollars and cents
    cout << endl << "Amount due: $" << amountDue << endl;
    cout << "Amount received: $" << amountReceived << endl << endl;
    cout << "Change given:" << endl;
    cout << "dollars -> " << dollars << endl;
    cout << "quarters -> " << quarters << endl;
    cout << "dimes -> " << dimes << endl;
    cout << "nickels -> " << nickels << endl;
    cout << "pennies -> " << pennies << endl;

    return 0;
}
