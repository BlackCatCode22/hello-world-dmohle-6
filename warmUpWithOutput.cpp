#include <iostream>
using namespace std;

int main() {
    cout << "\n\nWelcome to my Warmup!\n\n" << endl;

    // Create some variables.
    int userAge = 0;
    double userAgeDouble = 0.0;
    char userAgeChar = 'x';

    cout << "\n Please enter your age (as a whole): ";
    cin >> userAge;

    cout << "\n Please enter your age (as a decimal): ";
    cin >> userAgeDouble;

    cout << "\n Please enter your age (as a single character): ";
    cin >> userAgeChar;


    cout << " \n User age as integer is: \n " << userAge;

    cout << " \n User age as a decimal name is: \n " << userAgeDouble;

    cout << " \n User age as a single character is: \n " << userAgeChar ;
;

    return 0;
}
