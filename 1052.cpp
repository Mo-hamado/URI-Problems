/*
Read an integer number between 1 and 12, including.
 Corresponding to this number, you must print the month of the year, in english, with the first letter in uppercase.

Input
The input contains only an integer number.

Output
Print the name of the month according to the input number, with the first letter in uppercase.

Input Sample	Output Sample
4               April
*/
#include <iostream>

using namespace std;

int main() {

	int m;
	cin >> m;
	switch (m){
		case 1: cout << "January\n"; break;
		case 2: cout << "February\n"; break;
		case 3: cout << "March\n"; break;
		case 4: cout << "April\n"; break;
		case 5: cout << "May\n"; break;
		case 6: cout << "June\n"; break;
		case 7: cout << "July\n"; break;
		case 8: cout << "August\n"; break;
		case 9: cout << "September\n"; break;
		case 10: cout << "October\n"; break;
		case 11: cout << "November\n"; break;
		case 12: cout << "December\n"; break;
}

	return 0;
}
