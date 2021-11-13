/*
Read the four values corresponding to the x and y axes of two points in the plane,
 p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them,
 showing four decimal places after the comma, according to the formula:

Distance = ((x2 - x1)^2 + (y2 - y1)^2)^(1/2)

Input
The input file contains two lines of data.
 The first one contains two double values: x1 y1
 and the second one also contains two double values with one digit after the decimal point: x2 y2.

Output
Calculate and print the distance value using the provided formula,
 with 4 digits after the decimal point.

Input Sample	Output Sample
1.0 7.0
5.0 9.0         4.4721

-2.5 0.4
12.1 7.3        16.1484

2.5 -0.4
-12.2 7.0       16.4575
*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

	float x1, y1, x2, y2, Distance;
	cin >> x1 >> y1 >> x2 >> y2;
	Distance = sqrt((x2 - x1) * (x2-x1) + (y2 - y1) * (y2-y1));
	cout << fixed << setprecision(4) << Distance << endl;


	return 0;
}
