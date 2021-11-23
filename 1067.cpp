/*
Read an integer value X (1 <= X <= 1000).
  Then print the odd numbers from 1 to X, each one in a line, including X if is the case.

Input
The input will be an integer value.

Output
Print all odd values between 1 and X, including X if is the case.

Input Sample	Output Sample
8				1
				3
				5
				7
*/
#include <iostream>

using namespace std;

int main() {

	int X;
	cin >> X;
	for (int i = 1;i <= X;i++) {
		if (i % 2 != 0)cout << i << "\n";
	}

	return 0;
}
