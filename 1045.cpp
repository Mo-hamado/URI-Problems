/*
Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order,
 so that the side A is the biggest of the three sides.
 Next, determine the type of triangle that they can make,
 based on the following cases always writing an appropriate message:
if A ≥ B + C, write the message: NAO FORMA TRIANGULO
if A^2 = B^2 + C^2, write the message: TRIANGULO RETANGULO
if A^2 > B^2 + C^2, write the message: TRIANGULO OBTUSANGULO
if A^2 < B^2 + C^2, write the message: TRIANGULO ACUTANGULO
if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES

Input
The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).

Output
Print all the classifications of the triangle presented in the input.

Input Samples	Output Samples
7.0 5.0 7.0     TRIANGULO ACUTANGULO
                TRIANGULO ISOSCELES

6.0 6.0 10.0    TRIANGULO OBTUSANGULO
                TRIANGULO ISOSCELES

6.0 6.0 6.0     TRIANGULO ACUTANGULO
                TRIANGULO EQUILATERO

5.0 7.0 2.0     NAO FORMA TRIANGULO

6.0 8.0 10.0    TRIANGULO RETANGULO
*/
#include <iostream>

using namespace std;

int main() {

    double a, b, c, A, B, C;
    cin >> A >> B >> C;
    if (A >= B && A >= C) {
        a = A;
        if (B >= C) {
            b = B;
            c = C;
        }
        else {
            b = C;
            c = B;
        }
    }
    else if (B >= A && B >= C) {
        a = B;
        if (A >= C) {
            b = A;
            c = C;
        }
        else {
            b = C;
            c = A;
        }
    }
    else if (C >= A && C >= B) {
        a = C;
        if (A >= B) {
            b = A;
            c = B;
        }
        else {
            b = B;
            c = A;
        }
    }
    if (a >= (b + c)) cout << "NAO FORMA TRIANGULO\n";
    else {
        if ((a * a) == ((b * b) + (c * c))) cout << "TRIANGULO RETANGULO\n";
        if ((a * a) > ((b * b) + (c * c))) cout << "TRIANGULO OBTUSANGULO\n";
        if ((a * a) < ((b * b) + (c * c))) cout << "TRIANGULO ACUTANGULO\n";
        if (a == b && a == c) cout << "TRIANGULO EQUILATERO\n";
        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}
