
// This program stores a list of names in an array.
// and searches for a specific name ("Sam") using a for loop.

#include <iostream> // Include library for input and output.
#include <string>
using namespace std;

// FUNCTION DECLARATION
// This function searches for a name in an array of string.
// It returns the index (position) it found, or -1 if not found.

int searchName(string arr[], int size, string target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Return the index where the name was found.
        }
    }
    return -1; // If not found, return -1
}
// MAIN FUNCTION
int main() {
    // Array of names
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};  // List of names // Calculate the number of names in the array
    int size = sizeof(names) / sizeof(names[0]); 
    string target;  // Name to search for.
    cout << "Enter a name to search for: " ; // User enters the name.
    cin >> target;
    int position = searchName(names, size, target) ; // Call the search function.
    if (position != -1) {
        cout << " Found " << target << " at position " << position << " in the list. " << endl;

    } else {
        cout << " Sorry " << target << " was not found in the list. " << endl;
    }
    return 0;

}

