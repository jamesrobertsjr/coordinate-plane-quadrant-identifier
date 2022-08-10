//
// Author: jameserv
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

void findQuadrant (int, int);
char validateEntry (char);

int main()
{
    int x, y;
    char yesNo;

    do
    {
        // Asks the user for a coordinate.
        cout << "Enter an integer coordinate: x y\n";
        cin >> x >> y;
        
        // Finds coordinate quadrant.
        findQuadrant(x, y);

        // Asks to run again.
        cout << "Would you like to run again? (Y or N) ";
        cin >> yesNo;

    } while (validateEntry(yesNo) == 'Y');
    
    return 0;
}

void findQuadrant(int x, int y)
{
    // Origin.
    if (x == 0 && y == 0)
        cout << "(" << x << "," << y << ")" << " is on the origin.\n";

    // First Quadrant.
    if (x > 0 && y > 0)
        cout << "(" << x << "," << y << ")" << " is in the first quadrant.\n";

    // Second Quadrant.
    if (x < 0 && y > 0)
        cout << "(" << x << "," << y << ")" << " is in the second quadrant.\n";

    // Third Quadrant.
    if (x < 0 && y < 0)
        cout << "(" << x << "," << y << ")" << " is in the third quadrant.\n";

    // Fourth Quadrant.
    if (x > 0 && y < 0)
        cout << "(" << x << "," << y << ")" << " is in the fourth quadrant.\n";

    // X-Axis.
    if (y == 0 && x != 0)
        cout << "(" << x << "," << y << ")" << " is on the x-axis.\n";

    // Y-Axis.
    if (x == 0 && y != 0)
        cout << "(" << x << "," << y << ")" << " is on the y-axis.\n";   
}

// Validates user entry for re-running program.
char validateEntry (char yesNo)
{
    // Checks if the user submitted a proper entry. If not, it asks for a valid entry.
    while (toupper(yesNo) != 'Y' && toupper(yesNo) != 'N')
    {
        cout << "ERROR. Invalid entry. Please try again." << endl;
        cin >> yesNo;
    }
    
    // Returns the valid entry.
    return toupper(yesNo);
}
