/*
Read an integer value N.
 After, read these N values and print a message for each value saying if this value is odd,
 even, positive or negative.
 In case of zero (0), although the correct description would be "EVEN NULL",
because by definition zero is even, your program must print only "NULL", without quotes.

Input
The first line of input is an integer N (N < 10000),
 that indicates the total number of test cases.
 Each case is a integer number X (-107 < X <107)..

Output
For each test case, print a corresponding message, according to the below example.
 All messages must be printed in uppercase letters and always will have one space between two words in the same line.

Input Sample		Output Sample
4			ODD NEGATIVE
-5			NULL
0			ODD POSITIVE
3			EVEN NEGATIVE
-4
*/
#include <iostream>

using namespace std;

int main() {

	int n,num;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int num;
		cin >> num;
		if (num == 0)cout << "NULL\n";
		else if (num > 0) {
			if (num % 2 == 0)cout << "EVEN POSITIVE\n";
			else cout << "ODD POSITIVE\n";
		}
		else if (num < 0) {
			if (num % 2 == 0)cout << "EVEN NEGATIVE\n";
			else cout << "ODD NEGATIVE\n";
		}
	}

	return 0;
}
