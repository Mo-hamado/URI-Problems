/*
Read an integer value X and print the 6 consecutive odd numbers from X, a value per line,
 including X if it is the case.

Input
The input will be a positive integer value.

Output
The output will be a sequence of six odd numbers.

Input Sample	Output Sample
8		9
		11
		13
		15
		17
		19
*/
#include <iostream>

using namespace std;

int main() {

	int X;
	cin >> X;
	for (int i = 1;i <= 6;i++) {
		if (X % 2 != 0) {
			cout << X << endl;
			X += 2;
		}
		else {
			X++;
			i--;
		}
	}

	return 0;
}
