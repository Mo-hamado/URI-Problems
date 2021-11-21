/*
Write a program that prints all even numbers between 1 and 100, including them if it is the case.

Input
In this extremely simple problem there is no input.

Output
Print all even numbers between 1 and 100, including them, one by row.

Input Sample	Output Sample
		2
		4
		6
		...
		100
*/
#include <iostream>

using namespace std;

int main() {
	int num = 2;
	while (num<=100)
	{
		cout << num << endl;
		num+= 2;
	}

	return 0;
}
