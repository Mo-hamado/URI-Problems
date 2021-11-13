//#include <iostream>
//#include <iomanip>
//using namespace std;
////input  saller's name, his fixed salary, the total value sold by him in the month (in money)
////output the final salary(total) 000.00
//int main() {
//
//	string saller_nm;
//	double f_salary, sales_made;
//	cin >> saller_nm >> f_salary >> sales_made;
//	cout << "TOTAL = R$ " << fixed << setprecision(2) << (f_salary + (0.15 * sales_made)) << endl;
//
//	return 0;
//}
#include <iostream>
using namespace std;

int main() {
	/* td......total days enters
		 ty......total number of years in td
		 tm.....total number of month in td
		 d........remaining number of days from td
		 */
	int td, ty, tm, d;
	cin >> td;
	ty = td / 360;
	td = td - ty * 360;
	tm = td / 30;
	d = td - tm * 30;
	cout << ty << "  " << tm << "  " << d << endl;
	cin >> td;
	ty = td / 365;
	td = td - ty * 360;
	tm = td / 30;
	d = td - tm * 30;
	cout << ty << "  " << tm << "  " << d << endl;
	return 0;
}