// This program tells the user how many days are in a given month (1-12) using the switch statement.
// For simplicity, Febrary is assumed to have 28 days ( no leap year handling).
#include <iostream> // //Includes iostream library for input and output.
using namespace std; 

int main() {
    int month; // Stores the month number entered by the user.
    cout << "Enter a month (1 to 12): "; // Ask the user for a month.
    cin >> month; // Read the month input.

    // Switch the value of month and selects the correct case.
    switch (month) {
    // These months all have 31 days.
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: 
        cout << "31\n";
        break; // Exit this case and end the switch.

    // These months all have 30 days.
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30\n";
        break;

    // February (not considering leap years).
        case 2:
        cout << "28\n";
        break;

    // If the user types a number outside 1 to 12.
    default:
        cout << "Invalid month\n";
        break;
    }

    return 0; // Program end successfully
}
    