/*
The company ABC decided to give a salary increase to its employees, according to the following table:

        Salary   	            Readjustment Rate
      0 - 400.00 	                 15%
    400.01 - 800.00 	             12%
    800.01 - 1200.00 	             10%
   1200.01 - 2000.00 	             7%
     Above 2000.00     	             4%

Read the employee's salary, calculate and print the new employee's salary,
 as well the money earned and the increase percentual obtained by the employee,
 with corresponding messages in Portuguese, as the below example.

Input
The input contains only a floating-point number, with 2 digits after the decimal point.

Output
Print 3 messages followed by the corresponding numbers (see example) informing the new salary,
 the among of money earned and the percentual obtained by the employee.
Note:
 Novo salario:  means "New Salary"
 Reajuste ganho: means "Money earned"
 Em percentual: means "In percentage"

Input Sample	Output Sample
400.00          Novo salario: 460.00
                Reajuste ganho: 60.00
                Em percentual: 15 %

800.01          Novo salario: 880.01
                Reajuste ganho: 80.00
                Em percentual: 10 %

2000.00         Novo salario: 2140.00
                Reajuste ganho: 140.00
                Em percentual: 7 %
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double slr, inc=0.00;
    cin >> slr;
    if (slr >= 0 && slr <= 400.00) {
        inc = slr * 0.15;
        cout << "Novo salario: " << fixed << setprecision(2) << (slr + inc) << "\nReajuste ganho: " << fixed << setprecision(2) << inc << "\nEm percentual: 15 %\n";
    }else if (slr >= 400.01 && slr <= 800.00) {
        inc = slr * 0.12;
        cout << "Novo salario: " << fixed << setprecision(2) << (slr + inc) << "\nReajuste ganho: " << fixed << setprecision(2) << inc << "\nEm percentual: 12 %\n";
    }else if (slr >= 800.01 && slr <= 1200.00) {
        inc = slr * 0.10;
        cout << "Novo salario: " << fixed << setprecision(2) << (slr + inc) << "\nReajuste ganho: " << fixed << setprecision(2) << inc << "\nEm percentual: 10 %\n";
    }else if (slr >= 1200.01 && slr <= 2000.00) {
        inc = slr * 0.07;
        cout << "Novo salario: " << fixed << setprecision(2) << (slr + inc) << "\nReajuste ganho: " << fixed << setprecision(2) << inc << "\nEm percentual: 7 %\n";
    }else if (slr > 2000.00) {
        inc = slr * 0.04;
        cout << "Novo salario: " << fixed << setprecision(2) << (slr + inc) << "\nReajuste ganho: " << fixed << setprecision(2) << inc << "\nEm percentual: 4 %\n";
    }

    return 0;
}
