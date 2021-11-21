/*
In an imaginary country called Lisarb,
 all the people are very happy to pay their taxes because they know that doesn’t exist corrupt politicians and the taxes are used to benefit the population,
 without any misappropriation. The currency of this country is Rombus, whose symbol is R$.

Read a value with 2 digits after the decimal point, equivalent to the salary of a Lisarb inhabitant.
 Then print the due value that this person must pay of taxes, according to the table below.

Salary					Taxes
from 0.00 to R$ 2,000.00		Without taxes
from R$ 2,000.01 to R$ 3,000.00	   	   8%
from R$ 3,000.01 to R$ 4,500.00	   	   18%
more than R$ 4,500.00			   28%

Remember, if the salary is R$ 3,002.00 for example, the rate of 8% is only over R$ 1,000.00,
 because the salary from R$ 0.00 to R$ 2,000.00 is tax free.
 In the follow example, the total rate is 8% over R$ 1000.00 + 18% over R$ 2.00, resulting in R$ 80.36 at all.
 The answer must be printed with 2 digits after the decimal point.

Input
The input contains only a float-point number, with 2 digits after the decimal point.

Output
Print the message "R$" followed by a blank space and the total tax to be payed, with two digits after the decimal point. If the value is up to 2000, print the message "Isento".

Input Samples	Outputs Samples
3002.00         R$ 80.36
1701.12         Isento
4520.00         R$ 355.60
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double slr;
	cin >> slr;
	if (slr >= 0.00 && slr <= 2000.00) cout << "Isento\n";
	else if (slr >= 2000.01 && slr <= 3000.00) cout << "R$ " << fixed << setprecision(2) << ((slr - 2000.00) * 0.08) << "\n";
	else if (slr >= 3000.01 && slr <= 4500.00) cout << "R$ " << fixed << setprecision(2) << (80 + (slr - 3000.00) * 0.18) << "\n";
	else if (slr > 4500.00) cout << "R$ " << fixed << setprecision(2) << (80 + 270 + (slr - 4500.00) * 0.28) << "\n";

	return 0;
}
