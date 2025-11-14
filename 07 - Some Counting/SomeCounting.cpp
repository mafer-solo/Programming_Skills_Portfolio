// This program desmostrates different types of for-loops:
// 1.- Counting from 0 to 50 (step +1)
// 2.- Counting from 50 down to 0 (step -1)
// 3.- Counting from 30 to 50 (step +1)
// 4.- Counting from 50 down to 10 (step -2)
// 5.- Counting from 100 to 200 (step +5)
// Each loop prints a sequence of integers using different start, end, and step values to show common counting patterns.

#include <iostream> // Include library for input and output.
using namespace std;

int main() {
    for (int i = 0; i <= 50; i++) cout << i << " "; // Increments of 1.
    cout << endl;

    for (int i = 50; i >= 0; i--) cout << i << " "; // Decrements of 1.
    cout << endl;

    for (int i = 30; i <= 50; i++) cout << i << " "; // Increment of 1.
    cout << endl;

    for (int i = 50; i >= 10; i -= 2) cout << i << " "; // Decrements of 2
    cout << endl;

    for (int i = 100; i <= 200; i += 5) cout << i << " "; // Increment of 5
    cout << endl;

    return 0; // Program ends successfully.
}
