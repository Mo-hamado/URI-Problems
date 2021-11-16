/*
Using the following table, write a program that reads a code and the amount of an item.
 After, print the value to pay.
 This is a very simple program with the only intention of practice of selection commands.

CODE       SPECIFICATION          PRICE
1          Cachorro Quente        R$ 4.00
2          X-Salada               R$ 4.50
3          X-Bacon                R$ 5.00
4          Torrada simples        R$ 2.00
5          Refrigerante           R$ 1.50

Input
The input file contains two integer numbers X and Y.
 X is the product code and Y is the quantity of this item according to the above table.

Output
The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.

Input Sample	Output Sample
3 2             Total: R$ 10.00
4 3             Total: R$ 6.00
2 3             Total: R$ 13.50
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int X, Y;
	cin >> X >> Y;
	switch (X){
	case 1:cout << "Total: R$ " << fixed << setprecision(2) << Y * 4.00 << endl; break;
	case 2:cout << "Total: R$ " << fixed << setprecision(2) << Y * 4.50 << endl; break;
	case 3:cout << "Total: R$ " << fixed << setprecision(2) << Y * 5.00 << endl; break;
	case 4:cout << "Total: R$ " << fixed << setprecision(2) << Y * 2.00 << endl; break;
	case 5:cout << "Total: R$ " << fixed << setprecision(2) << Y * 1.50 << endl; break;
	}

	return 0;
}
