
#include <iostream>
using namespace std;

int main() {
    // Create the variable `even`
    int time;
    int hours;

    // Ask the user for input
    cout << "Enter a time in mins: ";
    // Save user input to the variable `even`
    cin >> time;

    
    if (time > 60) {
        hours = 0;
        do {
            time = time - 60;
            hours = hours + 1;
        }
        while (time > 60);
        cout << hours << ":" << time << endl;
    } else {
        cout << time << endl;
    }

    // Return 0 to indicate successful execution
    return 0;
}

