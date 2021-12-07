/*
Read an integer N, which represents the number of following test cases.
 Each test case consists of three floating-point numbers, each one with one digit after the decimal point.
 Print the weighted average for each of these sets of three numbers,
 considering that the first number has weight 2, the second number has weight 3 and the third number has weight 5.

Input
The input file contains an integer number N in the first line.
 Each N following line is a test case with three float-point numbers, each one with one digit after the decimal point.

Output
For each test case, print the weighted average according with below example.

Input Sample		Output Sample
3				5.7
6.5 4.3 6.2		6.3
5.1 4.2 8.1		9.3
8.0 9.0 10.0
*/
#include<iostream>
#include <iomanip>

using namespace std;

int main() {

	int N;
	double num1, num2, num3;
	cin >> N;
	for (int i = 1;i <= N;i++) {
		cin >> num1 >> num2 >> num3;
		cout << fixed << setprecision(1) << ((2 * num1 + 3 * num2 + 5 * num3) / (2 + 3 + 5)) << endl;
	}

	return 0;
}
