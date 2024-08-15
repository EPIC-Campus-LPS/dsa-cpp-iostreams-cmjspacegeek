
#include <iostream>
//using the std name for cin and cout // str::
using namespace std;

int main() {
    // creating the var temp
    int temp;
    // asking the user with ": "
    cout << ": ";
    // saving user input to the var temp
    cin >> temp;

    temp = ((temp-32)*(5.0/9.0));
    // converting from Fahrenheit to Celsius
    

    // printing temp
    cout << temp << std::endl;
    //returning 0 as it says it worked
    return 0;
}
