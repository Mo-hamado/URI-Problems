/*
Read three integers and sort them in ascending order.
 After, print these values in ascending order,
 a blank line and then the values in the sequence as they were readed.

Input
The input contains three integer numbers.

Output
Present the output as requested above.

Input Sample	Output Sample
7 21 -14        -14
                7
                21

                7
                21
                -14

-14 21 7        -14
                7
                21

                -14
                21
                7
*/
#include <iostream>

using namespace std;

int main() {

    int A,B,C, a, b, c;
    cin >> A >> B >> C;
    if (A < B && A < C) {
        a = A;
        if (B < C) {
            b = B;
            c = C;
        }
        else {
            b = C;
            c = B;
        }
        cout << a << "\n" << b << "\n" << c << "\n\n" << A << "\n" << B << "\n" << C << "\n";
    }
    else if (B < A && B < C) {
        a = B;
        if (A < C) {
            b = A;
            c = C;
        }
        else {
            b = C;
            c = A;
        }
        cout << a << "\n" << b << "\n" << c << "\n\n" << A << "\n" << B << "\n" << C << "\n";
    }
    else if (C < A && C < B) {
        a = C;
        if (A < B) {
            b = A;
            c = B;
        }
        else {
            b = B;
            c = A;
        }
        cout << a << "\n" << b << "\n" << c << "\n\n" << A << "\n" << B << "\n" << C << "\n";
    }

    return 0;
}
