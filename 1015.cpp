#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

	float x1, y1, x2, y2, Distance;
	cin >> x1 >> y1 >> x2 >> y2;
	Distance = sqrt((x2 - x1) * (x2-x1) + (y2 - y1) * (y2-y1));
	cout << fixed << setprecision(4) << Distance << endl;


	return 0;
}