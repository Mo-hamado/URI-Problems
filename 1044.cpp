/*
Read two nteger values (A and B).
 After, the program should print the message "Sao Multiplos" (are multiples)
 or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.

Input
The input has two integer numbers.

Output
Print the relative message to the input as stated above.

Input Sample	Output Sample
6 24            Sao Multiplos
6 25            Nao sao Multiplos
*/
#include <iostream>

using namespace std;

int main() {

	int A, B;
	cin >> A >> B;
	if (A % B == 0 || B % A == 0)
		cout << "Sao Multiplos\n";
	else
		cout << "Nao sao Multiplos\n";

	return 0;
}
