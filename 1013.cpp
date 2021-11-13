/*
Make a program that reads 3 integer values and present the greatest one followed by
 the message "eh o maior". Use the following formula:
 MariorAB = (a+b+abs(a-b))/2


Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.

Input Samples	Output Samples
7 14 106        106 eh o maior
217 14 6        217 eh o maior
*/
#include <iostream>

using namespace std;

int main() {

	int a, b, c,MariorAB,Marior;
	cin >> a >> b >> c;
	MariorAB = (a + b + abs(a - b)) / 2;
	Marior = (MariorAB + c + abs(MariorAB - c)) / 2;
	cout << Marior << " eh o maior" << endl;

	return 0;
}
