/*
Read 6 values that can be floating point numbers.
 After, print how many of them were positive.
 In the next line, print the average of all positive values typed, with one digit after the decimal point.

Input
The input consist in 6 numbers that can be integer or floating point values.
 At least one number will be positive.

Output
The first output value is the amount of positive numbers.
 The next line should show the average of the positive values ​typed.

Input Sample	Output Sample
7		4 valores positivos
-5		7.4
6
-3.4
4.6
12
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	int counter = 0;
	double num, sum = 0;
	for (int i = 1;i <= 6;i++) {
		cin >> num;
		if (num > 0) {
			counter++;
			sum += num;
		}
	}
	cout << counter << " valores positivos\n" << fixed << setprecision(1) << sum / counter << endl;

	return 0;
}
