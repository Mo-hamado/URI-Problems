/*
Write a program that reads 6 numbers.
 These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers.

Input
Six numbers, positive and/or negative.

Output
Print a message with the total number of positive numbers.

Input Sample	Output Sample
7		4 valores positivos
-5
6
-3.4
4.6
12
*/
#include <iostream>

using namespace std;

int main() {

	double num;
	int counter = 0;
	for (int i = 0;i < 6;i++) {
		cin >> num;
		if (num > 0) counter++;
	}
	cout << counter << " valores positivos\n";

	return 0;
}
