#include <iostream>

using namespace std;

int main() {

	int a, b, c,MariorAB,Marior;
	cin >> a >> b >> c;
	MariorAB = (a + b + abs(a - b)) / 2;
	Marior = (MariorAB + c + abs(MariorAB - c)) / 2;
	cout << Marior << " eh o maior" << endl;

	return 0;
}