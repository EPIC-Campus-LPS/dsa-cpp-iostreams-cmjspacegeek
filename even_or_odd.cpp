
#include <iostream>
using namespace std;

int main() {
    // Create the variable `even`
    int even;
    int rem;

    // Ask the user for input
    cout << "Enter a number: ";
    // Save user input to the variable `even`
    cin >> even;


    rem = even % 2;

    // Check if the number is even
    if (rem == 0) {
        cout << "This is even" << endl;
    } else {
        cout << "This is odd" << endl;
    }

    
    return 0;
}
