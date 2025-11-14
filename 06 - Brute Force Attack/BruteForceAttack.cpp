// This programm asks the user to enter a password. 
// The user has 5 attempts to enter the password is 12345. 
// If correct: display a welcome message. 
// If all 5 attempts are incorrect: display error message. 

#include <iostream> // Includes iostream library for input and output.
using namespace std;

int main() {
    const int password = 12345; // Correct password stored as a constant.
    int attempt; // Variable to stored the user's input.
    bool access = false;  // Track access status (true = correct password).
    
    cout << "=== SECURITY SYSTEM === " << endl;
    cout << "You have 5 attempts to enter the correct password. " << endl;
    cout  << "---------------" << endl;

     // Using a WHILE loop.
    int tries = 0;
    while (tries < 5 && !access) { // Loop runs while attempts less than 5 AND access is false.
        cout << "Enter password attempt " 
        << (tries + 1) << " of 5: "; // Display the attempt number.
        cin >> attempt; // Read user's password input.

        if (attempt == password) {  // Check if input matches correct password.
            cout << "Access granted! Welcome to the Security Area. " << endl; // Success.
            access = true;    // Change status to true to stop the loop.

        } else {  //If incorrect password:
            cout << "Incorrect password. Try again." << endl; // Error message.
        }
        tries++; // Increase the number of attempts.
    }

    // If user fails 5 times.
    if (!access)  // Run only if access is still false after the loop.
        cout << "Too many failed attempts. Authorities have been alerted!" << endl;

    return 0;  // Program ends successfully.
}