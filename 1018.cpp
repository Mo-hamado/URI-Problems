/*
In this problem you have to read an integer value and calculate
 the smallest possible number of banknotes in which the value may be decomposed.
 The possible banknotes are 100, 50, 20, 10, 5, 2 e 1.
 Print the read value and the list of banknotes.

Input
The input file contains an integer value N (0 < N < 1000000).

Output
Print the read number and the minimum quantity of each necessary banknotes in Portuguese language,
 as the given example.
 Do not forget to print the end of line after each line,
 otherwise you will receive “Presentation Error”.

Input Sample	Output Sample
576             576
                5 nota(s) de R$ 100,00
                1 nota(s) de R$ 50,00
                1 nota(s) de R$ 20,00
                0 nota(s) de R$ 10,00
                1 nota(s) de R$ 5,00
                0 nota(s) de R$ 2,00
                1 nota(s) de R$ 1,00

11257           11257
                112 nota(s) de R$ 100,00
                1 nota(s) de R$ 50,00
                0 nota(s) de R$ 20,00
                0 nota(s) de R$ 10,00
                1 nota(s) de R$ 5,00
                1 nota(s) de R$ 2,00
                0 nota(s) de R$ 1,00

503             503
                5 nota(s) de R$ 100,00
                0 nota(s) de R$ 50,00
                0 nota(s) de R$ 20,00
                0 nota(s) de R$ 10,00
                0 nota(s) de R$ 5,00
                1 nota(s) de R$ 2,00
                1 nota(s) de R$ 1,00
*/
#include <iostream>

using namespace std;

int main() {

    int banknt, r100, r50, r20, r10, r5, r2, r1;
    cin >> banknt;
    r100 = banknt / 100;
    r50 = (banknt % 100) / 50;
    r20 = (banknt % 100 % 50) / 20;
    r10 = (banknt % 100 % 50 % 20) / 10;
    r5 = (banknt % 100 % 50 % 20 % 10) / 5;
    r2 = (banknt % 100 % 50 % 20 % 10 % 5) / 2;
    r1 = banknt % 100 % 50 % 20 % 10 % 5 % 2;
    cout << banknt << "\n" << r100 << " nota(s) de R$ 100,00\n" << r50 << " nota(s) de R$ 50,00\n" << r20 << " nota(s) de R$ 20,00\n" << r10 << " nota(s) de R$ 10,00\n" << r5 << " nota(s) de R$ 5,00\n" << r2 << " nota(s) de R$ 2,00\n" << r1 << " nota(s) de R$ 1,00\n";

    return 0;
}
