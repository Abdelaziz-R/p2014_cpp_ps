#include <iostream>
using namespace std;

int main() 
{
    // prompting user for number 1/1.5
    float input;
    cout << "Enter a number: ";
    cin >> input;

    // checking invalidaty of user's input 3/4
    if (input == 0) 
    {
        cout << "Invalid character/s or zero value!" << endl;
    }

    else if (static_cast<int>(input) != input) 
    {
        cout << "Invalid: a floating point number!" << endl;
    }
    
    else if (input < 32 || input > 126) 
    {
        cout << "Invalid: number is out of the range!" << endl;
    }
    
    else
    {
        // printing the number and the opposite printable character 2/2
        cout << "The character for " << input << " is " << static_cast<char>(input) << "." << endl;
    }
}
// good work 👍 6.5/10
