/*
Peter is organizing an event in his University.
 The event will be in April month, beginning and finishing within April month.
 The problem is: Peter wants to calculate the event duration in seconds,
 knowing obviously the begin and the end time of the event.

You know that the event can take from few seconds to some days,
 so, you must help Peter to compute the total time corresponding to duration of the event.

Input
The first line of the input contains information about the beginning day of the event in the format: “Dia xx”.
 The next line contains the start time of the event in the format presented in the sample input.
 Follow 2 input lines with same format, corresponding to the end of the event.

Output
Your program must print the following output, one information by line,
 considering that if any information is null for example, the number 0 must be printed in place of W, X, Y or Z:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Consider that the event of the test case have the minimum duration of one minute.
 “dia” means day, “hora” means hour, “minuto” means minute and “Segundo” means second in Portuguese.

Input Sample		Output Sample
Dia 5				3 dia(s)
08 : 12 : 23		22 hora(s)
Dia 9				1 minuto(s)
06 : 13 : 23		0 segundo(s)
*/
#include <iostream>

using namespace std;

int main() {

	string temp;
	int ds, de, hs, he, ms, me, ss, se;
	
	cin >> temp >> ds;
	cin >> hs >> temp >> ms >> temp >> ss;
	cin >> temp >> de;
	cin >> he >> temp >> me >> temp >> se;
	int  tss, tse, ts;
	tss = (60 * ms) + (60 * 60 * hs) + ss;
	tse = (60 * me) + (60 * 60 * he) + se;
	if (tss <= tse) {
		ts = tse - tss;
		cout << (de - ds) << " dia(s)\n" << (ts / 3600) << " hora(s)\n" << ((ts % 3600) / 60) << " minuto(s)\n" << ((ts % 3600) % 60) << " segundo(s)\n";
	}else if (tss > tse) {
		ts = (tse+86400) - tss;
		cout << ((de - 1) - ds) << " dia(s)\n" << (ts / 3600) << " hora(s)\n" << ((ts % 3600) / 60) << " minuto(s)\n" << ((ts % 3600) % 60) << " segundo(s)\n";
	}

	return 0;
}
