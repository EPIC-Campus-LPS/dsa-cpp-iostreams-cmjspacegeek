
#include <iostream>
//using the std name for cin and cout // str::
using namespace std;

int main() {
    // creating the var echo
    string echo;
    // asking the user with ": "
    cout << ": ";
    // saving user input to the var echo
    getline(cin,echo);
    // printing echo
    cout << echo << std::endl;
    //returning 0 as it says it worked
    return 0;
}