// This program asks the user a simple questions. 
// It compares the user's answer with the correct answer.
#include <iostream> // Include iostream library from printing text, for input and output.
#include <string> // Allow the program to use the string data type.
using namespace std;

int main() {
    string answer; // Store the user's answer as a string.
    int score = 0; // Keeps track of the number of correct answers.

    // Question 1
    cout << " Question 1: What is the capital of France? " << endl;
    getline(cin, answer); // Read the full line. 

    // Convert answer to lowercase for "flexibility". 
    for (auto &c : answer)  c = tolower(c);
    if (answer == "paris") {
        cout << "Correct! Paris is the capital of France." << endl;
        score++;

    }else  {
        cout << "Incorect. The correct answer is Paris." << endl;

    }
    cout << endl;

    // Question 2
    cout << "Question 2: What is the capital of Spain? " << endl;
    getline(cin, answer);

    // Convert answer to lowercase again.
    for (auto &c : answer) c = tolower(c);
    if (answer == "madrid") {
        cout << "Correct! Madrid is the capital of Spain." << endl;
        score++;
    } else {
        cout << "Incorect. The correct aswer is Madrid." << endl;
    }
    cout << endl; 
    cout << "Your final score: " << score << "/2" << endl;
    
return 0;

}