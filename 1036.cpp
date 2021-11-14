/*
Read 3 floating-point numbers.
 After, print the roots of bhaskara’s formula.
 If it's impossible to calculate the roots because a division by zero or a square root of a negative number,
 presents the message “Impossivel calcular”.

 PS.{ for an eqn. ax^2=bx=c=0
       x=1(-b+(b^2-4ac)^0.5)/(2a)
       x2=(-b-(b^2-4ac)^0.5)/(2a) }

Input
Read 3 floating-point numbers (double) A, B and C.

Output
Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.

Input Samples	Output Samples
10.0 20.1 5.1   R1 = -0.29788
                R2 = -1.71212

0.0 20.0 5.0    Impossivel calcular

10.3 203.0 5.0  R1 = -0.02466
                R2 = -19.68408

10.0 3.0 5.0    Impossivel calcular
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

    double a, b, c, sr;
    cin >> a >> b >> c;             //a != 0   ,    b^2 - 4ac >= 0
    sr = (b * b - 4*a*c);
    if (a != 0 && sr >= 0)
        cout << "R1 = " << fixed << setprecision(5) << ((-b + sqrt(sr)) / (2 * a)) << "\nR2 = " << fixed << setprecision(5) << ((-b - sqrt(sr)) / (2 * a)) << endl;
    else cout << "Impossivel calcular\n";

    return 0;
}
