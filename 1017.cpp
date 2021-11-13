#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int t, v;
	float d;
	cin >> t >> v;
	d = v * t;
	cout << fixed << setprecision(3) << (d / 12) << endl;

	return 0;
}