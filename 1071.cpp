/*
Read two integer values X and Y. Print the sum of all odd values between them.

Input
The input file contain two integer values.

Output
The program must print an integer number.
 This number is the sum of all odd values between both input values that must fit in an integer number.

Sample Input	  Sample Output
6				        5
-5

15	      			13
12

12				      0
12
*/
#include <iostream>

using namespace std;

int main() {
	
	int X, Y, sum = 0;
	cin >> X >> Y;
	int min, max;
	if (X <= Y) {
		max = Y;
		min = X;
	}
	else {
		max = X;
		min = Y;
	}
	for (int i = min+1;i < max;i++)
		if (i % 2 != 0)sum += i;
	cout << sum << endl;

	return 0;
}
