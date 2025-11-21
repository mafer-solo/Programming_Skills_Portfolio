// This program stores and prints basic personal information such as name, hometown, and age.
// Each value is stored in an appropriate. data type. 
//The output is displayed using a single `cout` statement.
#include <iostream> // Include iostream library for printing text.
#include <string> // Allow use of cout without writing std ::count.
#include <limits> // Allows clearing invalid input and provides min/max limits for data types.

using namespace std;

int main() {
    string name; // Store the user's full name.
    string hometown; // Store the user's hometown.
    int age; // Store the user's age (must be an integer).

    // Input: Full name (with spaces).
    cout << "Enter your name: " ; // Print the output on the console.
    getline(cin, name) ; // Read full text with spaces.

    // Input: Hometown ( with spaces)
    cout << "Enter your hometown: " ; // Print the output on the console.
    getline(cin, hometown) ; 

    // Input: Age with validation.
    // If the user enter letters, the program asks again.
    cout << "Enter your age: " ;
    while (!(cin >> age)) { // If the user enters letters, the program asks again.
        cout << "Invalid input. Please enter a number: ";
        cin.clear(); // Clear error state
    }
    // Clear the leftover newline to keep input clean for future getline. 
    cin . ignore(numeric_limits<streamsize>::max(), '\n') ;

    // Output: Only One cout allowed
    cout << "My name is " << name << "\n" 
         << "Hometown: " << hometown << "\n"
         << "Age: " << age << endl;
    return 0;
} 
