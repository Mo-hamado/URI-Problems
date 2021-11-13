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