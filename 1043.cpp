/*
Read three point floating values (A, B and C) and verify if is possible to make a triangle with them.
 If it is possible, calculate the perimeter of the triangle and print the message:
Perimetro = XX.X

If it is not possible, calculate the area of the trapezium which basis A and B and C as height,
 and print the message:
Area = XX.X

Input
The input file has tree floating point numbers.

Output
Print the result with one digit after the decimal point.

Input Sample	Output Sample
6.0 4.0 2.0     Area = 10.0
6.0 4.0 2.1     Perimetro = 12.1
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double A, B, C;
	cin >> A >> B >> C;
	if ((A + B) > C && (A + C) > B && (B + C) > A) cout << "Perimetro = " << fixed << setprecision(1) << A + B + C << endl;
	else cout << "Area = " << fixed << setprecision(1) << ((A + B) / 2) * C << endl;

	return 0;
}
