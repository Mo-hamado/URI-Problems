/*
Make a program that reads five integer values.
 Count how many of these values are even and  print this information like the following example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters in lowercase,
 indicating how many even numbers were typed.

Input Sample	Output Sample
7		3 valores pares
-5
6
-4
12
*/
#include <iostream>

using namespace std;

int main() {

	int num, counter = 0;
	for (int i = 0;i < 5;i++) {
		cin >> num;
		if (num % 2 == 0) counter++;
	}
	cout << counter << " valores pares\n";

	return 0;
}
