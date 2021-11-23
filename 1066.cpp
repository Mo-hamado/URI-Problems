/*
Make a program that reads five integer values.
 Count how many of these values are even, odd, positive and negative.
 Print these information like following example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters in lowercase,
 indicating how many of these values are even, odd, positive and negative.

Input Sample	Output Sample
-5		3 valor(es) par(es)
0		2 valor(es) impar(es)
-3		1 valor(es) positivo(s)
-4		3 valor(es) negativo(s)
12
*/
#include <iostream>

using namespace std;

int main() {

	int num, even=0, odd=0, pos=0, neg=0;
	for (int i = 0;i < 5;i++) {
		cin >> num;
		if (num % 2 == 0) even++;
		else odd++;
		if (num > 0)pos++;
		else if (num < 0)neg++;
	}
	cout << even << " valor(es) par(es)\n" << odd << " valor(es) impar(es)\n" << pos << " valor(es) positivo(s)\n" << neg << " valor(es) negativo(s)\n";

	return 0;
}
