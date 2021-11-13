#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int code_p1, num_unit_p1;
	double price_unit_p1;
	int code_p2, num_unit_p2;
	double price_unit_p2;
	cin >> code_p1 >> num_unit_p1 >> price_unit_p1 >> code_p2 >> num_unit_p2 >> price_unit_p2;
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (num_unit_p1 * price_unit_p1) + (num_unit_p2 * price_unit_p2) << endl;

	return 0;
}