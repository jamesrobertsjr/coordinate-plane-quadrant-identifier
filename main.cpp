//
// Author: James Roberts, Jr.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int x, y;                       // Stores user-inputted data.
    string planeLocation;           // Stores coordinate plane locations.

    // Asks the user for a coordinate.
    cout << "Enter an integer coordinate: x y\n";
    cin >> x >> y;


    // Origin.
    if (x == 0 && y == 0)
    {
        cout << "(" << x << "," << y << ")" << " is on the origin.\n";
    }

    // First Quadrant.
    if (x > 0 && y > 0)
    {
        cout << "(" << x << "," << y << ")" << " is in the first quadrant.\n";
    }

    // Second Quadrant.
    if (x < 0 && y > 0)
    {
        cout << "(" << x << "," << y << ")" << " is in the second quadrant.\n";
    }

    // Third Quadrant.
    if (x < 0 && y < 0)
    {
        cout << "(" << x << "," << y << ")" << " is in the third quadrant.\n";
    }

    // Fourth Quadrant.
    if (x > 0 && y < 0)
    {
        cout << "(" << x << "," << y << ")" << " is in the fourth quadrant.\n";
    }

    // X-Axis.
    if (y == 0 && x != 0)
    {
        planeLocation = "x-axis";
        cout << "(" << x << "," << y << ")" << " is on the x-axis.\n";
    }

    // Y-Axis.
    if (x == 0 && y != 0)
    {
        planeLocation = "y-axis";
        cout << "(" << x << "," << y << ")" << " is on the y-axis.\n";
    }

    return 0;
}

/*
 Program Output Sample 1:

 Enter an integer coordinate: x y
 4 6
 (4,6) is in the first quadrant.

 Program Output Sample 2:

 Enter an integer coordinate: x y
 -3 -6
 (-3,-6) is in the third quadrant.

 */

