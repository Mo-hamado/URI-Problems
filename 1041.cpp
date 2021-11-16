/*
Write an algorithm that reads two floating values (x and y),
 which should represent the coordinates of a point in a plane.
 Next, determine which quadrant the point belongs,
 or if you are at one of the Cartesian axes or the origin (x = y = 0).

            |Y
     Q2     |    Q1
            |        X
  ---------------------
            |
     Q3     |    Q4
            |

If the point is at the origin, write the message "Origem".

If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y".

Input
The input contains the coordinates of a point.

Output
The output should display the quadrant in which the point is.

Input Sample	Output Sample
4.5 -2.2        Q4
0.1 0.1         Q1
0.0 0.0         Origem
*/
#include <iostream>

using namespace std;

int main() {

    double x, y;
    cin >> x >> y;
    if (x > 0 && y > 0) cout << "Q1\n";
    else if (x < 0 && y > 0) cout << "Q2\n";
    else if (x < 0 && y < 0) cout << "Q3\n";
    else if (x > 0 && y < 0) cout << "Q4\n";
    else if (x == 0 && y == 0) cout << "Origem\n";
    else if (x == 0 ) cout << "Eixo Y\n";
    else if (y == 0 ) cout << "Eixo X\n";

    return 0;
}
