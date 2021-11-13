/*
Read a value of floating point with two decimal places.
 This represents a monetary value.
 After this, calculate the smallest possible number of notes and coins on which the value can be decomposed.
 The considered notes are of 100, 50, 20, 10, 5, 2.
 The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01.
 Print the message “NOTAS:” followed by the list of notes
 and the message “MOEDAS:” followed by the list of coins.

Input
The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

Output
Print the minimum quantity of banknotes and coins necessary to change the initial value,
 as the given example.

Input Sample	Output Sample
576.73          NOTAS:
                5 nota(s) de R$ 100.00
                1 nota(s) de R$ 50.00
                1 nota(s) de R$ 20.00
                0 nota(s) de R$ 10.00
                1 nota(s) de R$ 5.00
                0 nota(s) de R$ 2.00
                MOEDAS:
                1 moeda(s) de R$ 1.00
                1 moeda(s) de R$ 0.50
                0 moeda(s) de R$ 0.25
                2 moeda(s) de R$ 0.10
                0 moeda(s) de R$ 0.05
                3 moeda(s) de R$ 0.01

4.00            NOTAS:
                0 nota(s) de R$ 100.00
                0 nota(s) de R$ 50.00
                0 nota(s) de R$ 20.00
                0 nota(s) de R$ 10.00
                0 nota(s) de R$ 5.00
                2 nota(s) de R$ 2.00
                MOEDAS:
                0 moeda(s) de R$ 1.00
                0 moeda(s) de R$ 0.50
                0 moeda(s) de R$ 0.25
                0 moeda(s) de R$ 0.10
                0 moeda(s) de R$ 0.05
                0 moeda(s) de R$ 0.01

91.01           NOTAS:
                0 nota(s) de R$ 100.00
                1 nota(s) de R$ 50.00
                2 nota(s) de R$ 20.00
                0 nota(s) de R$ 10.00
                0 nota(s) de R$ 5.00
                0 nota(s) de R$ 2.00
                MOEDAS:
                1 moeda(s) de R$ 1.00
                0 moeda(s) de R$ 0.50
                0 moeda(s) de R$ 0.25
                0 moeda(s) de R$ 0.10
                0 moeda(s) de R$ 0.05
                1 moeda(s) de R$ 0.01
*/
#include <iostream>

using namespace std;

int main() {

    double mny;
    int nt_mny, n100, n50, n20, n10, n5, n2, m100, m50, m25, m10, m05, m01;
    cin >> mny;
    nt_mny = mny;
    n100 = nt_mny / 100;
    n50 = (nt_mny % 100) / 50;
    n20 = (nt_mny % 100 % 50) / 20;
    n10 = (nt_mny % 100 % 50 % 20) / 10;
    n5 = (nt_mny % 100 % 50 % 20 % 10) / 5;
    n2 = (nt_mny % 100 % 50 % 20 % 10 % 5) / 2;
    m100 = nt_mny % 100 % 50 % 20 % 10 % 5 % 2;
    mny = (mny - nt_mny) * 100;
    nt_mny = mny;
    m50 = nt_mny / 50;
    m25 = (nt_mny % 50) / 25;
    m10 = (nt_mny % 50 % 25) / 10;
    m05 = (nt_mny % 50 % 25 % 10) / 5;
    m01 = nt_mny % 50 % 25 % 10 % 5;
    cout << "NOTAS:\n" << n100 << " nota(s) de R$ 100.00\n" << n50 << " nota(s) de R$ 50.00\n" << n20 << " nota(s) de R$ 20.00\n" << n10 << " nota(s) de R$ 10.00\n" << n5 << " nota(s) de R$ 5.00\n" << n2 << " nota(s) de R$ 2.00\n";
    cout << "MOEDAS:\n" << m100 << " moeda(s) de R$ 1.00\n" << m50 << " moeda(s) de R$ 0.50\n" << m25 << " moeda(s) de R$ 0.25\n" << m10 << " moeda(s) de R$ 0.10\n" << m05 << " moeda(s) de R$ 0.05\n" << m01 << " moeda(s) de R$ 0.01\n";
   
    return 0;
}