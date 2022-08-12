//
// quadrantIdentifier.cpp
// Author: jameserv
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

// Function prototypes.
string findQuadrant (int, int);
char validateRunAgain (char);

int main() {
    int x = 0, y = 0;
    char yesNo = '\0';

    do {
        // Gets data.
        cout << "Enter an integer coordinate: x y\n";
        cin >> x >> y;
        
        // Outputs data.
        cout << "(" << x << "," << y << ")" << " Location: ";
        cout << findQuadrant(x,y) << endl;

        // Asks to run again.
        cout << "Would you like to run again? (Y or N) ";
        cin >> yesNo;

    } while (validateRunAgain(yesNo) == 'Y');

    return 0;
}

string findQuadrant(int x, int y) {
    if (x > 0 && y > 0) {
        return "First Quadrant";
    } else if (x < 0 && y > 0) {
        return "Second Quadrant";
    } else if (x < 0 && y < 0) {
        return "Third Quadrant";
    } else if (x > 0 && y < 0) {
        return "Fourth Quadrant";
    } else if (y == 0 && x != 0) {
        return "X-Axis";
    } else if (x == 0 && y != 0) {
        return "Y-Axis";
    } else {
        return "Origin";
    }
}

// Validates user entry for re-running program.
char validateRunAgain (char yesNo) {
    while (toupper(yesNo) != 'Y' && toupper(yesNo) != 'N') {
        cout << "ERROR: Invalid Entry. Please try again." << endl;
        cin >> yesNo;
    }

    return toupper(yesNo);
}
