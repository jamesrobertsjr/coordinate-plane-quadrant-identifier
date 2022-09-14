//
// quadrantIdentifier.cpp
// Author: jameserv
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

// Function prototypes.
std::string findQuadrant (int, int);
char validateRunAgain (char);

struct UserEntry {
    int xCoord, yCoord;
    char yesNo;
};

int main() {
    UserEntry user;
    
    do {
        // Gets data.
        std::cout << "Enter an integer coordinate: x y\n";
        std::cin >> user.xCoord >> user.yCoord;
        
        // Outputs data.
        std::cout << "(" << user.xCoord << "," << user.yCoord << ")" << " Location: ";
        std::cout << findQuadrant(user.xCoord,user.yCoord) << std::endl;

        // Asks to run again.
        std::cout << "Would you like to run again? (Y or N) ";
        std::cin >> user.yesNo;

    } while (validateRunAgain(user.yesNo) == 'Y');
    return 0;
}

std::string findQuadrant(int x, int y) {
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
        std::cout << "ERROR: Invalid Entry. Please try again." << std::endl;
        std::cin >> yesNo;
    }
    return toupper(yesNo);
}
