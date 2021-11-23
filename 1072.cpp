/*
Read an integer N. This N will be the number of integer numbers X that will be read.

Print how many these numbers X are in the interval [10,20] and how many values are out of this interval.

Input
The first line of input is an integer N (N < 10000), that indicates the total number of test cases.
Each case is an integer number X (-107 < X < 107).

Output
For each test case, print how many numbers are in and how many values are out of the interval.

Input Sample	Output Sample
4	        	2 in
14		        2 out
123
10
-25
*/
#include <iostream>

using namespace std;

int main() {

	int N, X, in = 0, out = 0;
	cin >> N;
	for (int i = 1;i <= N;i++) {
		cin >> X;
		if (X >= 10 && X <= 20)in++;
		else out++;
	}
	cout << in << " in\n" << out << " out\n";

	return 0;
}
