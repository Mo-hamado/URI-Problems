/*
You must make a program that read a float-point number
 and print a message saying in which of following intervals the number belongs:
 [0,25] (25,50], (50,75], (75,100].
 If the read number is less than zero or greather than 100,
 the program must print the message “Fora de intervalo” that means "Out of Interval".

The symbol '(' represents greater than. For example:
[0,25] indicates numbers between 0 and 25.0000, including both.
(25,50] indicates numbers greater than 25 (25.00001) up to 50.0000000.

Input
The input file contains a floating-point number.

Output
The output must be a message like following example.

Input Sample	Output Sample
25.01           Intervalo (25,50]
25.00           Intervalo [0,25]
100.00          Intervalo (75,100]
-25.02          Fora de intervalo
*/
#include <iostream>

using namespace std;

int main() {

	double x;
	cin >> x;
	if (x >= 0 && x <= 100) {
		if (x <= 25) cout << "Intervalo [0,25]\n";
		else if (x > 25 && x <= 50) cout << "Intervalo (25,50]\n";
		else if (x > 50 && x <= 75) cout << "Intervalo (50,75]\n";
		else cout << "Intervalo (75,100]\n";
	}
	else cout << "Fora de intervalo\n";

	return 0;
}
