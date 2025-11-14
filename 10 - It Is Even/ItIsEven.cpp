// This program checks whether a number is even or odd using a function.
//It demonstrates conditionals and return values.


#include <iostream> // Include iostream library for printing text.
#include <string> //Allows use teh string data type.
using namespace std;

string checkEven(int number) {   // Thi function returns a message based on whether the number is even or odd.
    if (number % 2 == 0)
        return "The provided number is even";
    else
        return "The provided number is odd";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;  // Get user input.

    cout << checkEven(num) << endl;  // Display the result.
    return 0;  // End the program successfully.
}

