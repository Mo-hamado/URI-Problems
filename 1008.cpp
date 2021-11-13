/*
Write a program that reads an employee's number,
 his/her worked hours number in a month and the amount he received per hour.
 Print the employee's number and salary that he/she will receive at end of the month,
 with two decimal places.

Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
Don’t forget the space before and after the equal signal and after the U$.

Input
The input file contains 2 integer numbers and 1 value of floating point,
 representing the number,
 worked hours amount and the amount the employee receives per worked hour.

Output
Print the number and the employee's salary,
 according to the given example,
 with a blank space before and after the equal signal.

Input Samples	Output Samples
25
100             NUMBER = 25
5.50            SALARY = U$ 550.00

1
200             NUMBER = 1
20.50           SALARY = U$ 4100.00

6
145             NUMBER = 6
15.55           SALARY = U$ 2254.75
*/
#include<iostream>
#include <iomanip>
using namespace std;
/*input  emloyee's number, his worked hours number in a month, the amount received per hour 
  output emloyee's number, the salary at the end of month*/
int main() {

	int empl_num, hpm;        //empl_num = emloyee's number.......hpm = his worked hours number in a month
	float amount_ph;          //amount_ph = the amount received per hour
	cin >> empl_num >> hpm >> amount_ph;
	cout << "NUMBER = " << empl_num << "\nSALARY = U$ " << fixed << setprecision(2) << (hpm * amount_ph) << endl;

	return 0;
}
